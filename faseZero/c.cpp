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
        ll n,
        k;
    cin >> n >> k;
    for (int i = 2 * n; i > 0; i--)
    {
        if (i * i == k)
        {
            continue;
        }
        else if ((i * i - k) % (2 * n + 1) == 0 && ((i - (int)sqrt(k)) % 2 == 1))
        {

            cout << i * i << endl;
            return 0;
        }
    }
    return 0;
}
