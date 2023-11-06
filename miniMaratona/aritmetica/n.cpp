#include <stdlib.h>
#include <iostream>
#define ll long long

using namespace std;

ll factorial(int n)
{
    ll f = 1;
    for (int i = 1; i <= n; ++i)
        f *= i;
    return f;
}

int main()
{

    int f, m, p;
    while (cin >> f >> m >> p)
    {
        ll result = factorial(f) * factorial(m) * factorial(p) * 6;
        printf("%lld\n", result);
    }
    return 0;
}