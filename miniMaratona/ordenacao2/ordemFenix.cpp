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
    unsigned long long in;
    set<unsigned long long> v;
    vector<unsigned long long> ans;
    while (cin >> in)
    {
        if (in % 2 == 1)
            v.insert(in);
    }
    for (auto u : v)
    {
        ans.push_back(u);
    }
    sort(ans.begin(), ans.end());
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << endl;
    }
    cout << ans[ans.size() - 1] << endl;

    return 0;
}
