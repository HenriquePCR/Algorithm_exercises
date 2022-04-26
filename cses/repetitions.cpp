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

    string x;
    cin >> x;

    long long ans = 1;
    long long ansAux = 1;

    for (int i = 1; i < int(x.length()); i++)
    {
        if (x[i] == x[i - 1])
            ansAux++;
        if (x[i] != x[i - 1])
        {
            ans = max(ans, ansAux);
            ansAux = 1;
        }
    }
    ans = max(ans, ansAux);
    cout << ans << endl;
}
