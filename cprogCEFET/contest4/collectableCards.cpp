
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

int mdc(int a, int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return mdc(a - b, b);
    return mdc(a, b - a);
}

int main()
{
    // solution comes here
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int in1, in2;
        cin >> in1 >> in2;
        int ans = mdc(in1, in2);
        cout << ans << endl;
    }
    return 0;
}
