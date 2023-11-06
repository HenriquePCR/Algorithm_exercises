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
    while (t--)
    {
        ll n;
        vector<ll> v;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int n;
            cin >> n;
            v.push_back(n);
        }
        bool goingUp = false;
        bool goingDown = false;
        bool ans = true;
        for (int i = 1; i < n; i++)
        {
            if (goingUp)
            {
                if (v[i] == v[i - 1])
                {
                    continue;
                }
                else if (v[i] > v[i - 1])
                {
                    continue;
                }
                else
                {
                    // cout << v[i] << " " << v[i - 1];
                    ans = false;
                    break;
                }
            }
            else
            {
                if (v[i] == v[i - 1])
                {
                    continue;
                }
                else
                {
                    if (v[i] > v[i - 1])
                    {
                        goingUp = true;
                    }
                }
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
