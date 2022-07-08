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

    unsigned long long n, ans = 1;
    long long modulus;

    modulus = 1000000000 + 7;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ans = ans * 2;
        ans = ans % modulus;
    }

    cout << ans << endl;
}
