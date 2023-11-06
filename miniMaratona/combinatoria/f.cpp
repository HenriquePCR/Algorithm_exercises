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
    unsigned long long n1 = 1, n2 = 1, n3 = 1, n4, i, number;
    cin >> number;
    // cout << n1 << " " << n2 << " " << n3 << " ";
    if (number <= 3)
    {
        cout << 1 << endl;
        return 0;
    }
    else
    {
        for (i = 3; i < number; ++i)
        {
            n4 = n1 + n2 + n3;
            // cout << n4 << " ";
            n1 = n2;
            n2 = n3;
            n3 = n4;
        }
        cout << n4 << endl;
        return 0;
    }
}
