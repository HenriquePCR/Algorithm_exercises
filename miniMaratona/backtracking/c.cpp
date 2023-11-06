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

long long mdc(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

long long mmc(int a, int b)
{
    return (a / mdc(a, b)) * b;
}

int main()
{
    _
        // solution comes here
        ll a,
        b;
    cin >> a >> b;
    ll ans = mdc(a, b);
    cout << ans << endl;
    return 0;
}
