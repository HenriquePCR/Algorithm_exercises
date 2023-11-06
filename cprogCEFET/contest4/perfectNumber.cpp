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
    int in;
    cin >> in;
    for (int i = 0; i < in; i++)
    {

        int n;
        cin >> n;
        vector<int> v;
        for (int i = 1; i < n; i++)
        {
            if (n % i == 0)
            {
                v.push_back(i);
            }
        }
        ll total = 0;
        for (auto u : v)
        {
            // cout << u << " ";
            total += u;
        }
        if (total == n)
        {
            cout << n << " eh perfeito" << endl;
        }
        else
        {
            cout << n << " nao eh perfeito" << endl;
        }
    }

    return 0;
}
