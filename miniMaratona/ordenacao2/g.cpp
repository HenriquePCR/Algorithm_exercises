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
    vector<ll> input;
    set<int> v1;
    vector<pair<int, int>> v2;
    ll in;
    while (cin >> in)
    {
        input.push_back(in);
    }
    sort(input.begin(), input.end());
    for (auto u : input)
    {
        v1.insert(u);
    }
    for (auto u : v1)
    {
        v2.push_back({u, 0});
    }
    ll index = 0;
    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] == v2[index].first)
        {
            v2[index].second++;
        }
        else
        {
            index++;
            v2[index].second++;
        }
    }
    for (auto u : v2)
    {
        cout << u.first << " " << u.second << endl;
    }

    return 0;
}
