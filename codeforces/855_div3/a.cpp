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
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        unordered_set<char> v;
        string in;
        cin >> in;
        for (int i = 0; i < n; i++)
        {
            cout << in[i] << " ";
            v.insert(in[i]);
        }
        cout << endl;
        for (auto u : v)
        {
            cout << u;
        }
        cout << endl;
    }
    return 0;
}
