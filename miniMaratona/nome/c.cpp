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

vector<ll> v;

void findDivisors(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
        }
    }
}
int main()
{
    // solution comes here
    ll in;
    // for (auto u : v)
    // {
    //     cout << u << endl;
    // }
    while (cin >> in)
    {
        v.clear();
        if (in == 0)
            cout << "mensagem falsa" << endl;
        else
        {
            findDivisors(in);
            ll total;
            bool ans = true;
            ll vSize = v.size();
            ll p1 = 0, p2 = 1, p3 = 2;
            while (true)
            {
                total = v[p1] * v[p2] * v[p3];
                if (total == in)
                {
                    ans = true;
                    break;
                }
                if (p3 + 1 >= vSize)
                {
                    ans = false;
                    break;
                }
                p1++;
                p2++;
                p3++;
            }
            if (ans)
                cout << v[p1] << " " << v[p2] << " " << v[p3] << endl;
            else
                cout << "mensagem falsa" << endl;
        }
    }
}
