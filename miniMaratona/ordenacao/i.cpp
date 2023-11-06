#include <bits/stdc++.h>

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << end

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0X3f3f3f3f3f3f3f3fll;

bool isPrime(ll num)
{
    if (num == 1)
        return false;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{
    // solution comes here
    string in;
    while (cin >> in)
    {
        long long n1 = stol(in);
        long long x = n1;
        int ans = 0;

        int pal = 0;

        string in2 = in;

        if (isPrime(n1))
            ans = 1;

        reverse(in.begin(), in.end());

        if (in == in2)
            pal = 1;

        long long n2 = stol(in);

        if (isPrime(n2) && pal == 0)
        {
            if (ans == 1)
                ans = 2;
        }
        if (ans == 1)
            cout << x << " primo" << endl;
        if (ans == 2)
            cout << x << " omirp" << endl;
        if (ans == 0)
            cout << x << " nao primo" << endl;
    }
    return 0;
}
