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
        string in;
        cin >> in;
        vector<char> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(in[i]);
        }
        set<char> ans1;
        set<char> ans2;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            // ans1.insert(v[i]);
            if (get<1>(ans1.insert(v[i])) == true)
            {
                v.erase(v.begin() + i);
            }
        }
        cout << endl;
        for (int i = 0; i < v.size(); i++)
        {
            ans2.insert(v[i]);
        }
        cout << endl;
        cout << ans1.size() + ans2.size() << endl;
    }

    return 0;
}
