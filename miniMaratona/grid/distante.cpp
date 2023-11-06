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

    ll n;
    while (cin >> n)
    {
        set<unsigned long long> v;
        if (n == 0)
        {
            break;
        }
        bool alarm = false;
        bool explosion = false;
        unsigned long long max;
        cin >> max;
        for (int i = 0; i < n; i++)
        {
            unsigned long long in;
            cin >> in;
            if (v.count(in) == 0)
            {
                v.insert(in);
            }
            else
            {
                explosion = true;
            }
        }
        if (explosion)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}



1 2 3 4 5 6
2 3 4 5 6 1
3 4 5 6 1 2
4 5 6 1 2 3
5 6 1 2 3 4
6 1 2 3 4 5 