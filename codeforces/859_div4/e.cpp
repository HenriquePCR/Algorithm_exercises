#include <bits/stdc++.h>

// vector<vector<int>> matrix(RR, vector<int>(CC));

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << end

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0X3f3f3f3f3f3f3f3fll;

int query(int l, int r)
{
    cout << "? " << r - l + 1 << ' ';
    for (int i = l; i < r + 1; i++)
    {
        cout << i << " ";
    }
    cout << endl
         << flush;
    int in;
    cin >> in;
    return in;
}

int main()
{
    // solution comes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int num;
        vector<int> sum(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            sum[i + 1] += num + sum[i];
        }
        int l = 1;
        int r = n;

        while (l < r)
        {

            int m = (l + r) / 2;
            int total = 0;
            // cout << sum[m] - sum[l - 1] << endl;
            if (sum[m] - sum[l - 1] < query(l, m))
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }
        cout << "! " << l << endl
             << flush;
    }
    return 0;
}
