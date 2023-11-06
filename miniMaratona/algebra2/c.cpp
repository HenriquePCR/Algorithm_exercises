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

int mdc(int a, int b)
{
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

long long mmc(int a, int b)
{
    return (a / mdc(a, b)) * b;
}

int32_t main()
{
    // solution comes here
    int x;

    while (cin >> x)
    {
        vector<int> v;
        for (int i = 1; i < x + 1; i++)
        {
            v.push_back(i);
        }
        int ans = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            ans = mmc(ans, v[i]);
        }
        cout << ans << endl;
    }
    return 0;
}
