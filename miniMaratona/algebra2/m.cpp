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
#define int long long

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0X3f3f3f3f3f3f3f3fll;

int32_t main()
{
    // solution comes here
    int n1, n2;
    while (cin >> n1 >> n2)
    {
        vector<int> v;
        for (int i = n1 + 1; i < n2; i++)
        {
            std::string s = std::to_string(i);
            string aux = s;
            reverse(aux.begin(), aux.end());
            if (s == aux)
            {
                v.push_back(i);
            }
        }
        sort(v.begin(), v.end());
        if (v.size() < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << v[0] << " " << v[v.size() - 1] << endl;
        }
    }

    return 0;
}
