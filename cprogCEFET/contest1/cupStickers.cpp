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

    map<int, int> map1;

    map<int, int> map2;

    ll n;
    cin >> n;
    ll c;
    cin >> c;
    ll m;
    cin >> m;
    ll input;
    for (int i = 0; i < c; i++)
    {
        cin >> input;
        map1.insert(pair<int, int>(input, input));
    }
    for (int i = 0; i < m; i++)
    {
        cin >> input;
        if (map1.find(input) != map1.end())
        {
            map2.insert(pair<int, int>(input, input));
        }
    }
    for (auto y : map2)
    {
        c--;
    }
    cout << c << endl;
}