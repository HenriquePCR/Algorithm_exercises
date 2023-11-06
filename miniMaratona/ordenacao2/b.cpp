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

bool comp(pair<char, int> a, pair<char, int> b)
{
    if (a.second == b.second)
    {
        return a.first < b.first;
    }
    return a.second > b.second;
}

// bool comp2(pair<char, int> a, pair<char, int> b)
// {
//     if (a.second == b.second)
//     {
//         return a.first > b.first;
//     }
//     return a.second > b.second;
// }

int main()
{
    // solution comes here
    vector<pair<char, int>> v(26);
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {

        string in;
        std::getline(std::cin, in);
        cout << in << endl;
        std::transform(in.begin(), in.end(), in.begin(), ::toupper);
        cout << in << endl;
        for (int i = 0; i < in.size(); i++)
        {
            if (in[i] >= 65 && in[i] <= 165)
            {
                v[in[i] - 'A'].second++;
            }
        }
    }
    for (int i = 0; i < 26; i++)
    {
        v[i].f = 'A' + i;
    }
    sort(v.begin(), v.end(), comp);
    // sort(v.begin(), v.end(), comp2);

    for (int i = 0; i < 26; i++)
    {
        if (v[i].second > 0)
        {
            cout << v[i].first << " " << v[i].second << endl;
        }
    }
    return 0;
}
