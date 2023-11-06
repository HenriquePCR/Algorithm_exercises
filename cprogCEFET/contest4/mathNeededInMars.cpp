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
    int in;
    cin >> in;
    vector<pair<int, bool>> v;
    vector<pair<int, int>> v1;
    vector<int> values;
    int n;
    ll totalV = 0;
    for (int i = 0; i < in; i++)
    {
        cin >> n;
        // totalV += n;
        // v.push_back({total, true});
        // values.push_back(n);
        v1.push_back({n, (i + 1)});
    }
    char symbol;
    int boat;
    ll total = 0;
    int max = in;
    int aux = 0;
    while (aux <= max)
    {
        cin >> symbol;
        cin >> boat;
        aux++;

        if (symbol == 'a')
        {
            for (int i = 0; i < v1.size(); i++)
            {

                if (v1[i].s == boat)
                {
                    v1.erase(v1.begin() + i);
                }
            }
            max--;
            for (auto u : v1)
            {
                cout << u.first << " ";
            }
            cout << endl;
        }
        else
        {
            for (int i = 0; i < v1.size(); i++)
            {
                // cout << "boat: " << v1[i].s << endl;
                // cout << "total" << total << endl;
                if (v1[i].s == boat)
                {
                    break;
                }
                total += v1[i].f;
            }
            cout << total << endl;
            total = 0;
        }
        // cout << "aux: " << aux << endl;
        // cout << "max: " << max << endl;
    }
    return 0;
}
