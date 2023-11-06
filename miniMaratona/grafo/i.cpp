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
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> ans;
    for (int i = n1; i <= n2; i++)
    {
        if (i % 3 == 0)
            ans.push_back(i);
    }
    sort(ans.begin(), ans.end(), greater<int>());
    if (ans.size() != 1)
    {
        for (int i = 0; i < ans.size() - 1; i++)
        {
            cout << ans[i] << " ";
        }
    }
    cout << ans[ans.size() - 1] << endl;
    // for (auto u : ans)
    // {
    //     cout << u << ne
    // }
}
