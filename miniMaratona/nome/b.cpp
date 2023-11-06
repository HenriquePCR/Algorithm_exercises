#include <bits/stdc++.h>
#include <algorithm>

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
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll count = 0;
        int m1, m2;
        cin >> m1 >> m2;
        ll total = 0;
        for (ll i = m1; i <= m2; i++)
        {
            string x = to_string(i);
            string y = x;
            reverse(x.begin(), x.end());
            if (x == y)
            {
                string s = bitset<64>(i).to_string();
                s.erase(0, min(s.find_first_not_of('0'), s.size() - 1));
                string k = s;
                reverse(s.begin(), s.end());
                if (s == k)
                {
                    total += i;
                    count++;
                }
            }
        }
        cout << total << " " << count << endl;
    }
}
