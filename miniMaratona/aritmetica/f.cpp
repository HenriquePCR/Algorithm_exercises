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

long long factorial(int n)
{
    long long f = 1;
    for (int i = 1; i <= n; ++i)
        f *= i;
    return f;
}

int main()
{
    _
        // solution comes here
        int t;
    cin >> t;
    while (t--)
    {
        string in;
        cin >> in;
        set<char> s;
        for (auto &c : in)
        {
            c = tolower(c);
            s.insert(c);
        }
        vector<int> v;
        for (auto u : s)
        {
            int counter = 0;
            for (int i = 0; i < in.size(); ++i)
            {
                if (u == in[i])
                    counter++;
            }
            v.push_back(counter);
        }

        ll total = 1;
        for (auto u : v)
        {
            total *= factorial(u);
        }

        cout << factorial(in.size()) / total << endl;
    }
    return 0;
}
