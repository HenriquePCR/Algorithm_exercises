#include <bits/stdc++.h>

// algumas coisas de c++
// map<int, bool> m;
// cin >> input;
// cout << output;
// vector<int> x(n);
// sort(x.begin(), x.end());

using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
#define ll long long
    // solution comes here

    ll i, j;
    cin >> i >> j;
    ll m[i][j];
    ll in;
    for (ll a = 0; a < i; a++)
    {
        for (ll b = 0; b < j; b++)
        {
            cin >> in;
            m[i][j] = in;
            // cout << in;
        }
        // cout << endl;
    }
    ll cm1, cm2;
    cin >> cm1 >> cm2;
    ll aux = 0;
    for (ll a = 0; a < i; a++)
    {
        for (ll b = 0; b < j; b++)
        {
            if (cm1 > (j - b))
            {
                m[a][b + (cm1 % j)];
            }
                }
    }
}
