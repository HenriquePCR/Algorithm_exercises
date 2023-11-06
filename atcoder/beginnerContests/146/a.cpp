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
        map<string, int>
            m;
    m.insert({"SUN", 0});
    m.insert({"MON", 1});
    m.insert({"TUE", 2});
    m.insert({"WED", 3});
    m.insert({"THU", 4});
    m.insert({"FRI", 5});
    m.insert({"SAT", 6});
    string day;
    cin >> day;
    int value = m[day];
    int ans = 7 - value;
    cout << ans << endl;

    return 0;
}
