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
        if (n < 4)
        {
            cout << "NO" << endl;
        }
        else
        {

            for (int j = 0; j < n; j++)
            {
                in[j] = char(tolower(in[j]));
            }
            vector<char> ansV;
            ansV.push_back(in[0]);
            for (int i = 1; i < n; i++)
            {
                if (in[i] != in[i - 1])
                {
                    ansV.push_back(in[i]);
                }
            }
            string ans;
            for (auto u : ansV)
            {
                ans.push_back(u);
            }
            if (ans == "meow")
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}
