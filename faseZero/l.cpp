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

int dist(int j1, int j2, int i1, int i2)
{
    return (j2 - j1) * (j2 - j1) + (i2 - i1) * (i2 - i1);
}

int main()
{
    _
        // solution comes here
        int iIn,
        jIn;
    cin >> iIn >> jIn;
    double total = iIn * jIn;
    // vector<vector<pair<int, int>>> matrix(iIn, vector<pair<int, int>>(jIn));
    // vector < vector<int> matrix(iIn);
    int s;
    cin >> s;
    double totalS = 0;
    for (int k = 0; k < s; k++)
    {
        int i, j, r;
        cin >> i >> j >> r;

        int vertical, horizontal;
        int lower, upper, right, left;
        if (i + r <= iIn)
        {
            lower = r;
        }
        else
        {
            lower = iIn - i;
        }
        if (i - r >= 1)
        {
            upper = r;
        }
        else
        {
            upper = i - 1;
        }
        vertical = upper + lower + 1;
        if (j + r <= jIn)
        {
            right = r;
        }
        else
        {
            right = jIn - j;
        }
        if (j - r >= 1)
        {
            left = r;
        }
        else
        {
            left = j - 1;
        }
        horizontal = left + right + 1;
        totalS += horizontal * vertical;
    }
    double ans = totalS / total;
    cout << (long long)ans << endl;
    return 0;
}