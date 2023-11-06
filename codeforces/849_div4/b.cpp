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
        int x = 0, y = 0;
        bool end = false;

        int n;
        cin >> n;
        string in;
        cin >> in;
        for (int i = 0; i < n; i++)
        {
            if (in[i] == 'U')
            {
                y++;
            }
            else if (in[i] == 'L')
            {
                x--;
            }
            else if (in[i] == 'D')
            {
                y--;
            }
            else if (in[i] == 'R')
            {
                x++;
            }
            if (x == 1 && y == 1)
            {
                end = true;
                cout << "YES" << endl;
                break;
            }
        }
        if (!end)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
