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

int main()
{
    // solution comes here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        vector<int> small(26, 0);
        vector<int> big(26, 0);

        int n, k;
        cin >> n >> k;
        string in;
        cin >> in;

        for (int i = 0; i < n; i++)
        {
            if (in[i] >= 'A' && in[i] <= 'Z')
            {
                int index = in[i] - 'A';
                big[index]++;
            }
            else
            {
                int index = in[i] - 'a';
                small[index]++;
            }
        }
        // for (int i = 0; i < 26; i++)
        // {
        //     cout << small[i] << " " << big[i] << endl;
        // }
        int ans = 0;
        int pairs = 0;
        for (int i = 0; i < 26; i++)
        {
            pairs = min(small[i], big[i]);
            ans += pairs;
            small[i] -= pairs;
            big[i] -= pairs;
            int add = min(k, max(small[i], big[i]) / 2);
            k -= add;
            ans += add;
        }
        cout << ans << endl;
    }

    return 0;
}
