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
    long long input;
    cin >> input;
    long long x[input];
    for (int i = 0; i < input; i++)
    {
        cin >> x[i];
    }
    long long ans = 0;
    long long bigger = 0;
    long long biggerAux = 0;
    long long aux = 0;
    for (int i = 1; i < input; i++)
    {
        if (x[i] < x[i - 1])
        {
            biggerAux = x[i - 1];
            if (biggerAux > bigger)
                bigger = biggerAux;
            aux = bigger - x[i];
            ans = ans + (bigger - x[i]);
            x[i] = x[i] + aux;
            // ans = ans + (x[i - 1] - x[i]);
        }
    }
    cout << ans << endl;
}
