#include <bits/stdc++.h>

using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    // solution comes here

    long long n;
    cin >> n;
    cout << n << " ";
    while (n != 1)
    {
        if (n % 2 == 0)
        {
            n = n / 2;
            cout << n << " ";
        }
        else if (n % 2 == 1)
        {
            n = n * 3 + 1;
            cout << n << " ";
        }
    }
}
