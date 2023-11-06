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

bool comp(auto x, auto y)
{
    return x.s.s > y.s.s;
}

int main()
{
    _
        // solution comes here
        int n,
        ans;
    cin >> n >> ans;
    vector<pair<int, pair<int, int>>> v(n);
    for (int i = 0; i++; i < n)
    {
        cin >> v[i].s.f;
        v[i].f = i;
    }
    for (int i = 0; i++; i < n)
    {
        cin >> v[i].s.s;
    }
    vector<pair<int, pair<int, int>>> ansV;
    for (auto u : v)
    {
        if (u.s.f == ans)
        {
            ansV.push_back(u);
        }
    }
    return 0;
}
