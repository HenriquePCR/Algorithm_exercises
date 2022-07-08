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

    int max = 0, maxT = 0;
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 5; n / i >= 1; i = i * 5)
    {
        ans += n / i;
    }
    cout << ans << endl;
}