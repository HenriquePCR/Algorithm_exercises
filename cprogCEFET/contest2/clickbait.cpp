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
    ll k;
    cin >> k;
    vector<pair<ll, ll>> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i].f;
        cin >> v[i].s;
    }
    ll r = 9223372036854775805;
    ll l = 0;
    ll view = 0;
    ll viewAux = 0;
    while (l < r)
    {
        view = 0;
        ll m = (l + r) / 2;
        for (int i = 0; i < n; i++)
        {
            if (viewAux = m - v[i].f >= 0)
            {
                viewAux = m - v[i].f;
                view++;
                view += viewAux / v[i].s;
            }
        }
        if (view < k)
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
