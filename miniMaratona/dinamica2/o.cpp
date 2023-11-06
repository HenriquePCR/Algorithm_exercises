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
        int n;
    int total = 0;
    vector<int> v;
    while (cin >> n)
    {
        v.push_back(n);
    }
    total += v[0];
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = max(v[i - 1] + v[i], v[i]);
    }
    // for (auto u : v)
    // {
    //     cout << u << " ";
    // }
    // cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    cout << v[0] << endl;
    return 0;
}
