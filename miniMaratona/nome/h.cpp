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
    ll in;
    vector<ll> v;
    while (cin >> in)
    {
        v.push_back(in);
    }
    sort(v.begin(), v.end(), greater<ll>());
    ll fish = 1;
    vector<pair<ll, ll>> ans;
    for (ll i = 0; i < v.size() - 1; i++)
    {
        if (v[i] == v[i + 1])
        {
            fish++;
        }
        else
        {
            ans.push_back({v[i], fish});
            fish = 1;
        }
    }
    ll j = v.size() - 1;
    if (v[j] != v[j - 1])
    {
        ans.push_back({v[j], fish});
        fish = 1;
    }
    else
    {
        fish++;
        ans.push_back({v[j], fish});
    }
    for (auto u : ans)
    {
        cout << u.f << " " << u.s << endl;
    }
}
