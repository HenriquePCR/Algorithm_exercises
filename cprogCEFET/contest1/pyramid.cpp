#include <bits/stdc++.h>

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

    int n;
    cin >> n;
    // vector<vector<pair<int, int>>> matrix(n, vector<pair<int, int>>(n));
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> matrix[i][j].f;
    //         matrix[i][j].s = 0;
    //         cout << matrix[i][j].f;
    //         cout << "," << matrix[i][j].s << " ";
    //     }
    //     cout << endl;
    // }
    //  for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cin >> matrix[i][j].f;
    //         matrix[i][j].s = 0;
    //         cout << matrix[i][j].f;
    //         cout << "," << matrix[i][j].s << " ";

    //     }
    //     cout << endl;
    // }

    int m[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> m[i][j];
        }
        // cout << endl;
    }
    int totalCol = INF;
    int totalColAux = 0;
    int col;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            totalColAux += m[i][j];
        }
        if (totalColAux <= totalCol)
        {
            totalCol = totalColAux;
            col = j;
        }
        totalColAux = 0;
    }
    int small = col;
    int big = col;
    int ans = 0;
    // cout << small << " " << col << endl;
    for (int i = 0; i < n; i++)
    {
        //&& i != n - 1
        if (i != 0)
        {
            if (big + 1 > n - 1 && small - 1 >= 0)
            {
                small--;
            }
            else if (big + 1 <= n - 1 && small - 1 < 0)
            {
                big++;
            }
            else if (m[i][big + 1] < m[i][small - 1])
            {
                big++;
            }
            else
            {
                small--;
            }
        }
        for (int j = small; j < big + 1; j++)
        {
            // cout << ans << " " << small << " " << big << endl;
            ans += m[i][j];
        }
    }
    cout << ans << endl;
    return 0;
}
