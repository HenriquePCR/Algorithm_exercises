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
    _
        // solution comes here

        int n,
        l;
    cin >> n >> l;
    vector<string> v;
    string in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        v.push_back(in);
    }
    sort(v.begin(), v.end());
    for (auto u : v)
    {
        cout << u;
    }
    cout << endl;
    return 0;
}
