#include <bits/stdc++.h>

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
    ll n1 = 1, n2 = 1, n3, i, number;
    cin >> number;
    if (number <= 2)
    {
        cout << 1 << endl;
        return 0;
    }
    else
    {
        for (i = 2; i < number; ++i)
        {
            n3 = n1 * 3 + n2;
            n1 = n2;
            n2 = n3;
        }
        cout << n3 << endl;
        return 0;
    }
}
