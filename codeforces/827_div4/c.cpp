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
    int t;
    cin >> t;
    while (t--)
    {
        int v[8][8];
        char c;
        bool ans = false;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 8; j++)
            {
                cin >> c;
                v[i][j] = c;
            }
            // cin >> c;
        }

        for (int i = 0; i < 8; i++)
        {
            string s;
            for (int j = 0; j < 8; j++)
            {
                s.push_back(v[i][j]);
            }
            if (s == "RRRRRRRR")
            {
                cout << "R" << endl;
                break;
                ans = true;
            }
            else
            {
                continue;
            }
            // cin >> c;
        }
        if (ans == false)
        {
            for (int j = 0; j < 8; j++)
            {
                string s;
                for (int i = 0; i < 8; i++)
                {
                    s.push_back(v[i][j]);
                }
                if (s == "BBBBBBBB")
                {
                    cout << "B" << endl;
                    break;
                }
                else
                {
                    continue;
                }
                // cin >> c;
            }
        }

        // cin.ignore('\n');
        // percorrer cada vetor de char, juntar numa string e comparar com "RRRRRRRR" ou "BBBBBBB"
    }
    return 0;
}
