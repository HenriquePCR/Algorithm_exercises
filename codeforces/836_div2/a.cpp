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
    cin >> n;
    while (n--)
    {
        string in;
        cin >> in;
        vector<char> ans;
        for (int i = 0; i < in.size(); i++)
        {
            ans.push_back(in[i]);
        }
        for (int i = in.size() - 1; i >= 0; i--)
        {
            ans.push_back(in[i]);
        }
        for (auto u : ans)
        {
            cout << u;
        }
        cout << endl;
    }

    return 0;
}
