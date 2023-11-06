#include <bits/stdc++.h>

// vector<vector<int>> matrix(RR, vector<int>(CC));

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

int main()
{
    // solution comes here

    vector<unsigned long long> v(61);
    v[0] = 0;
    v[1] = 1;
    for (int i = 2; i < 61; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
    }
    int in;
    cin >> in;
    for (int i = 0; i < in; i++)
    {
        ll n;
        cin >> n;
        cout << "Fib(" << n << ") = " << v[n] << endl;
    }
    return 0;
}
