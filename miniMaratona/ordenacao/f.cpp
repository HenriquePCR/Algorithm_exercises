#include <bits/stdc++.h>

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

    vector<int> v;
    int in;
    while (cin >> in)
    {
        v.push_back(in);
    }
    vector<pair<int, int>> ans;
    sort(v.begin(), v.end());
    int cont = 1;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
        {
            cont++;
            if (i == v.size() - 1)
            {
                ans.push_back({v[i], cont});
            }
        }
        else
        {
            ans.push_back({v[i - 1], cont});
            cont = 1;
            if (i == v.size() - 1)
            {
                ans.push_back({v[i], cont});
            }
        }
    }
    for (auto y : ans)
    {
        cout << y.first << " " << y.second << endl;
    }
    return 0;
}
