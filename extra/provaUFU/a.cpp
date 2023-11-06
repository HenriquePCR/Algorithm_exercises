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
        int t;
    cin >> t;
    double ans = 0;
    int ans1 = 0, ans2 = 0;
    double n1, n2;
    for (int i = 0; i < t; i++)
    {

        cin >> n1 >> n2;
        // cout << n1 << " " << n2 << " " << ans << endl;
        if (n1 / n2 > ans)
        {
            ans = n1 / n2;
            ans1 = n1;
            ans2 = n2;
        }
    }
    cout << ans1 << " " << ans2 << endl;
    return 0;
}
