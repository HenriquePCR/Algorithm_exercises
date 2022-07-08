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
    long long n, n1, n2;
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        cin >> n1;
        cin >> n2;
        if ((n2 / 2) > n1 || (n1 / 2) > n2)
            cout << "NO" << endl;

        else if (n1 % 3 == 0 && n2 % 3 == 0)
        {
            cout << "YES" << endl;
        }
        else if (n1 % 3 == 2 && n2 % 3 == 1)
            cout << "YES" << endl;
        else if (n1 % 3 == 1 && n2 % 3 == 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
