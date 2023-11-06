// 2831
#include <bits/stdc++.h>

using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
#define ll long long
    // solution comes here

    ll nC;
    cin >> nC;
    ll input;
    vector<ll> v;
    string ans = "S";
    for (int i = 0; i < nC; i++)
    {
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    if (v[0] > 8)
        ans = "N";
    else
    {
        for (int i = 1; i < nC; i++)
        {
            if (v[i] - v[i - 1] > 8)
            {
                ans = "N";
            }
        }
    }

    cout << ans << endl;
}
