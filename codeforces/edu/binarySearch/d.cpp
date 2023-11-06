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
#define int long long

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0X3f3f3f3f3f3f3f3fll;

int32_t main()
{
    // solution comes here
    int n;
    cin >> n;
    vector<int> v;
    int num;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }
    sort(v.begin(), v.end());
    // for (auto u : v)
    // {
    //     cout << u << " ";
    // }
    // cout << endl;
    int nQ;
    cin >> nQ;
    vector<int> ans;
    for (int i = 0; i < nQ; i++)
    {
        int in1, in2;
        cin >> in1 >> in2;
        int l = 0, r = v.size() - 1;
        while (l < r)
        {
            int m = (l + r) / 2;
            if (v[m] < in1)
            {
                l = m + 1;
            }
            else
            {
                r = m;
            }
        }
        int ansL = l;
        l = 0, r = v.size() - 1;
        while (l < r)
        {
            int m = (l + r) / 2;
            // cout << l << endl;
            // cout << r << endl;
            if (v[m] < in2)
            {
                l = m + 1;
            }
            else
            {
                r = m;
            }
        }
        int ansR = l;
        int aux = 0;

        while (true)
        {
            if (v[ansL] == v[ansL - 1])
            {
                ansL = ansL - 1;
            }
            else
            {
                break;
            }
        }
        if (v[ansR] > in2)
            ansR--;
        while (true)
        {
            if (v[ansR] == v[ansR + 1])
            {
                ansR = ansR + 1;
            }
            else
            {
                break;
            }
        }
        // cout << ansL << " " << ansR << endl;
        ans.push_back(ansR - ansL + 1);
        // cout << ansR - ansL + 1 << " ";
        // cout << endl;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        if (i == ans.size() - 1)
            cout << ans[i];
        else
            cout << ans[i] << " ";
    }
    // cout << ans.size() - 1 << endl;
    return 0;
}
