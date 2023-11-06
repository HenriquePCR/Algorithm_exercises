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

    int n;
    while (true)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        set<string> ans;
        for (int i = 0; i < n; i++)
        {
            string in;
            cin >> in;
            sort(in.begin(), in.end());
            ans.insert(in);
        }
        cout << ans.size() << endl;
    }

    return 0;
}
