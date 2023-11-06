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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        vector<ll> sum(n + 1);
        ll aux = 0;
        ll num;
        for (ll i = 0; i < n; i++)
        {
            cin >> num;
            sum[i + 1] += num + sum[i];
        }
        for (ll i = 0; i < q; i++)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            ll queryTotal = 0;
            ll total = 0;
            queryTotal = (r - l + 1) * k;
            // cout << queryTotal << endl;
            // cout << sum[l - 1] << endl;
            // cout << (sum[n] - sum[r]) << endl;
            total = sum[l - 1] + queryTotal + (sum[n] - sum[r]);
            // cout << total << endl;
            if (total % 2 == 1)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
