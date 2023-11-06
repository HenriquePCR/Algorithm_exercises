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

ll fac(int n)
{
    ll f = 1;
    for (int i = 1; i <= n; ++i)
        f *= i;
    return f;
}
int main()
{
    _
        // solution comes here
        int t;
    cin >> t;
    while (t--)
    {
        ll n, d;
        unsigned long long c;
        cin >> n >> d >> c;
        ll ans = fac(n) / (fac(d) * fac(n - d));
        if (ans == c)
        {
            cout << "Harry estah correto!" << endl;
        }
        else if (ans < c)
        {
            cout << "Existem menos combinacoes!" << endl;
        }
        else
        {
            cout << "Existem mais combinacoes!" << endl;
        }
    }
    return 0;
}
