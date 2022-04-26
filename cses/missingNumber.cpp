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
    // solution comes here

    long long n, y;
    cin >> n;
    vector<long long> v(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    for (int i = 1; i <= n; i++)
    {
        if (v[i - 1] != i)
        {
            y = i;
            break;
        }
    }
    cout << y;
}
