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
    _
        // solution comes here
        int n;
    while (cin >> n)
    {

        if (n == 0)
        {
            return 0;
        }
        else
        {
            vector<int> v1;
            vector<int> v2;
            for (int i = 0; i < n; i++)
            {
                int in;
                cin >> in;
                v1.push_back(in);
                v2.push_back(in);
            }
            sort(v1.begin(), v1.end(), greater<int>());
            // for (auto u : v1)
            // {
            //     cout << u << " ";
            // }
            // cout << endl;
            int guilty = v1[1];
            // cout << guilty << endl;
            for (int i = 0; i < v2.size(); i++)
            {
                if (v2[i] == guilty)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
    }
    return 0;
}
