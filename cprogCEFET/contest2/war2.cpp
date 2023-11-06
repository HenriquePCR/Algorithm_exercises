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

    ll s;
    cin >> s;
    vector<ll> v1(s);
    vector<ll> v2(s);
    for (int i = 0; i < s; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < s; i++)
    {
        cin >> v2[i];
    }
    sort(v2.begin(), v2.end());
    for (int i = 0; i < s; i++)
    {
        ll l = 0;
        ll r = v2.size()-1;
        while (l < r)
        {
            ll m = (l + r) / 2;
            if (v[i] < k)
            {
                l = m + 1;
            }
            else
            {
                r = m;
            }
        }
    }
}
