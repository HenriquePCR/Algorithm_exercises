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
    vector<int> v;
    int n;
    while (cin >> n)
    {
        v.push_back(n);
    }
    int total = 0;
    int totalAux = 0;
    for (int i = 0; i < v.size(); i++)
    {
        totalAux = 0;
        for (int j = i; j < v.size(); j++)
        {
            totalAux += v[j];
            if (totalAux > total)
            {
                total = totalAux;
            }
        }
    }
    cout << total << endl;
}
