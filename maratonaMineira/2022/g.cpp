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
    _
        // solution comes here
        int n;
    cin >> n;
    string in;
    cin >> in;
    if (in[0] != 'x')
    {
        cout << -1 << endl;
        return 0;
    }
    int power = 0;
    int distance = 0;
    int aux = 0;
    int jumps = 0;
    for (int i = 0; i < n; i++)
    {
        if (in[i] == 'x')
        {
            if (aux)
            {
                if (distance > power)
                {
                    cout << -1 << endl;
                    return 0;
                }
                else
                {
                    jumps++;
                }
                distance = 0;
            }
            power++;

            aux = 0;
        }
        else if (in[i] == '.')
        {
            distance++;
            aux = 1;
        }
    }
    cout << jumps << endl;
    return 0;
}
