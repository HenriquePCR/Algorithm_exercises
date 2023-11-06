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
    int t;
    cin >> t;
    int n;
    string in;
    int ans;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> in;
        ans = n;
        for (int a = 0, b = n - 1; b > a; a++, b--)
        {
            // cout << in[a] << " " << in[b] << endl;
            if (in[a] == '0' && in[b] == '1')
            {
                ans = ans - 2;
            }
            else if (in[a] == '1' && in[b] == '0')
            {
                ans = ans - 2;
            }
            else
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
