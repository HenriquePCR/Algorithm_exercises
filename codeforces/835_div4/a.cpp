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
        vector<int> ans(3);
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        ans[0] = n1;
        ans[1] = n2;
        ans[2] = n3;
        sort(ans.begin(), ans.end());
        cout << ans[1] << endl;
    }
    return 0;
}
