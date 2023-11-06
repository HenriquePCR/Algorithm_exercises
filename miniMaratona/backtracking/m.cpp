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
    _
        // solution comes here
        double n;
    vector<double> v;
    while (cin >> n)
    {
        v.push_back(n);
    }
    sort(v.begin(), v.end());
    double ans = 0;
    if (v.size() % 2 == 1)
    {
        ans = v[v.size() / 2];
    }
    else
    {
        double n1 = v[(v.size() / 2) - 1];
        double n2 = v[(v.size() / 2)];
        ans = (n1 + n2) / 2;
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    cout << ans << endl;
    return 0;
}
