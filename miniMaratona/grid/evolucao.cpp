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

    char m[30][30];
    char c;
    int i = 0;
    int j = 0;
    pair<int, int> ghost;
    pair<int, int> pac;
    string str;
    while (getline(cin, str))
    {

        std::string::iterator end_pos = std::remove(str.begin(), str.end(), ' ');
        str.erase(end_pos, str.end());
        for (int k = 0; k < str.size(); k++)
        {
            if (str[k] == 'f')
            {
                ghost = {j, i};
            }
            if (str[k] == 'p')
            {
                pac = {j, i};
            }
            m[j][i] = str[k];
            j++;
            // cout << j << " " << i;
        }
        i++;
        j = 0;
    }
    int ans = abs(pac.s - ghost.s) + abs(pac.f - ghost.f);
    cout << ans << endl;
    // cout << "linha: " << pac.s << "coluna: " << pac.f << endl;
    // cout << "linha: " << ghost.s << "coluna: " << ghost.f << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j < 7; j++)
    //     {
    //         cout << m[j][i] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}
