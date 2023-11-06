#include <bits/stdc++.h>
using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define dbg(x) cout << #x << " = " << x << endl

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0X3f3f3f3f3f3f3f3fll;

int main()
{
    // solution comes here

    int n1;
    cin >> n1;
    cin.ignore(1, '\n');
    vector<pair<int, string>> v1(n1);
    for (int i = 0; i < n1; i++)
    {
        string x;
        cin >> x;
        int total = 0;
        int totalTotal = 0;
        for (int j = 0; j < x.length(); j++)
        {
            total += int(x[j]);
        }
        totalTotal += total;
        v1[i].f = total;
        v1[i].s = x;
    }
    int l = 0;
    int r = v1.size();
    ll total1 = 0;
    ll total2 = 0;
    ll m = 4;
    for (int i = 0; i <= m; i++)
    {
        total1 += v1[i].f * (i + 1);
    }
    int p = 1;
    for (int i = m + 1; i < v1.size(); i++)
    {
        total2 += v1[i].f * p;
        p++;
    }
    cout << total1 << " " << total2 << endl;
    // while (l < r)
    // {
    //     total1 = 0;
    //     total2 = 0;
    //     ll m = (l + r) / 2;
    //     dbg(m);
    //     for (int i = 0; i <= m; i++)
    //     {
    //         total1 += v1[i].f * (i + 1);
    //     }
    //     int l = 1;
    //     for (int i = m + 1; i < v1.size(); i++)
    //     {
    //         total2 += v1[i].f * l;
    //         l++;
    //     }
    //     if (total1 < total2)
    //     {
    //         l = m + 1;
    //     }
    //     else
    //     {
    //         r = m;
    //     }
    // }
    cout << v1[l].s << endl;
    return 0;
}
