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
    while (t--)
    {

        ll n;
        cin >> n;
        vector<ll> v1;
        vector<ll> v2;
        for (ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            v1.push_back(a);
            v2.push_back(a);
        }
        ll one = 0;
        ll totalI = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v1[i] == 0)
            {
                totalI += one;
            }
            else if (v1[i] == 1)
            {
                one++;
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (v1[i] == 0)
            {
                v1[i] = 1;
                break;
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (v2[i] == 1)
            {
                v2[i] = 0;
                break;
            }
        }
        ll one1 = 0;
        ll totalI1 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v1[i] == 0)
            {
                totalI1 += one1;
            }
            else if (v1[i] == 1)
            {
                one1++;
            }
        }
        ll one2 = 0;
        ll totalI2 = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v2[i] == 0)
            {
                totalI2 += one2;
            }
            else if (v2[i] == 1)
            {
                one2++;
            }
        }
        cout << max(totalI, max(totalI1, totalI2)) << endl;
    }
    return 0;
}
