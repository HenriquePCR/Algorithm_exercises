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

// int solve(int x)
// {
//     bool ready[N];
//     int value[N];
//     if (x < 0)
//         return INF;
//     if (x == 0)
//         return 0;
//     if (ready[x])
//         return value[x];
//     int best = INF;
//     for (auto c : coins)
//     {
//         best = min(best, solve(x - c) + 1);
//     }
//     value[x] = best;
//     ready[x] = true;
//     return best;
// }

int main()
{
    // solution comes here
    int q, v;
    cin >> q >> v;

    int in;

    int N = 10000000;
    vector<int> coins;

    for (int i = 0; i < q; i++)
    {
        cin >> in;
        coins.push_back(in);
    }
    bool ready[N];
    int value[N];

    value[0] = 0;
    for (int x = 1; x <= v; x++)
    {
        value[x] = INF;
        for (auto c : coins)
        {
            if (x - c >= 0)
            {
                value[x] = min(value[x], value[x - c] + 1);
                
            }
        }
    }
    cout << "teste" << endl;
    cout << value[v] << endl;
}
