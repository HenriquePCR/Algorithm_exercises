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

    int input;
    cin >> input;

    int counter = 0;
    long long n1;
    long long n2;
    long long maxN;
    long long diag;
    long long ans;
    while (counter < input)
    {
        cin >> n1;
        cin >> n2;
        maxN = max(n1, n2);
        diag = maxN * maxN - (maxN - 1);
        if (maxN % 2 == 0)
        {
            if (n1 < n2)
            {
                ans = diag - (n2 - n1);
            }
            else if (n1 > n2)
            {
                ans = diag + (n1 - n2);
            }
            else
            {
                ans = diag;
            }
        }
        else if ((maxN % 2 == 1))
        {
            if (n1 < n2)
            {
                ans = diag + (n2 - n1);
            }
            else if (n1 > n2)
            {
                ans = diag - (n1 - n2);
            }
            else
            {
                ans = diag;
            }
        }
        cout << ans << endl;
        counter++;
    }
}
