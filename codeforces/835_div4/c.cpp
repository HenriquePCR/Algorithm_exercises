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
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        vector<int> vC;
        for (int i = 0; i < n; i++)
        {
            int s;
            cin >> s;
            v.push_back(s);
            vC.push_back(s);
        }
        sort(vC.begin(), vC.end(), greater<int>());
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == vC[0])
            {
                if (i == v.size() - 1)
                    cout << vC[0] - vC[1];
                else
                    cout << vC[0] - vC[1] << " ";
            }
            else
            {
                if (i == v.size() - 1)
                    cout << v[i] - vC[0];
                else
                    cout << v[i] - vC[0] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
