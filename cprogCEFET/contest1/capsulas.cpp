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

    ll n;
    cin >> n;
    ll f;
    cin >> f;
    ll v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll r = 100;
    ll l = 0;
    ll cap = 0;
    ll capAux = 0;
    ll ans = 0;
    while (l < r)
    {
        cap = 0;
        capAux = 0;
        ll m = (l + r) / 2;
        for (int i = 0; i < n; i++)
        {
            cap += m / v[i];
        }
        if (cap < f)
        {
            l = m + 1;
        }
        else
        {
            r = m;
        }
    }
    cout << l << endl;
}
