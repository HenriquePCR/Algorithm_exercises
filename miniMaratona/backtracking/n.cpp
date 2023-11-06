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
        ll p;
    ll n1 = 0, n2 = 0;
    ll ans1, ans2;
    while (cin >> p)
        for (ll i = 0; i < p; i++)
        {
            if (i == 0)
            {
                n1 = 1;
            }
            else
            {
                n1 = i * i;
            }
            n2 = (i + 1) * (i + 1);
            if (n1 + n2 == p)
            {
                ll ans1 = i;
                ll ans2 = i + 1;
                cout << ans1 << " " << ans2 << endl;
                break;
            }
        }
    return 0;
}
