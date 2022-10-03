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
    double in1;
    long long n = 1;
    while (cin >> in1)
    {

        double in2;
        cin >> in2;
        double ans = in2 / in1;
        ans = ans * 100;
        ans = ans - 100;
        cout << "Projeto " << n << ":" << endl;
        cout << "Percentual dos juros da aplicacao: " << setprecision(2) << fixed << ans << " %" << endl
             << endl;
        n++;
    }
}
