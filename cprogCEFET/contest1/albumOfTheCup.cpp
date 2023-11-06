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

    map<int, int> m;

    ll total;
    cin >> total;
    ll s;
    cin >> s;
    ll x;
    for (int i = 0; i < s; i++)
    {
        cin >> x;
        m.insert(pair<int, int>(x, x));
    }
    for (auto y : m)
    {
        total--;
    }
    cout << total << endl;
    return 0;
}