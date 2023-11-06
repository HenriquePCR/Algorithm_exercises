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
    for (int k = 0; k < t; k++)
    {
        int n;
        cin >> n;
        string in;
        cin >> in;
        int i = 0;
        if (in[i] != 'm' && in[i] != 'M')
        {
            cout << "NO" << endl;
        }
        else
        {
            i++;
            while (in[i] == 'm' || in[i] == 'M')
            {
                i++;
            }
        }
        if (in[i] != 'e' && in[i] != 'E')
        {
            cout << "NO" << endl;
        }
        else
        {
            i++;
            while (in[i] == 'e' || in[i] == 'E')
            {
                i++;
            }
        }
        if (in[i] != 'o' && in[i] != 'O')
        {
            cout << "NO" << endl;
        }
        else
        {
            i++;
            while (in[i] == 'o' || in[i] == 'O')
            {
                i++;
            }
        }
        cout << i << endl;
        if (in[i] != 'w' && in[i] != 'W')
        {
            cout << "NO" << endl;
        }
        else
        {
            if (i == n - 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                i++;
                while (in[i] == 'w' || in[i] == 'W')
                {
                    cout << "loop: " << i << "->" << in[i] << endl;
                    i++;
                }
                if (i == n - 1)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << n - 1 << " " << i << endl;
                    cout << "NO" << endl;
                }
            }
        }
    }
    return 0;
}
