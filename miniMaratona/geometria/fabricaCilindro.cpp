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
    while (true)
    {
        double l, c, r1, r2;
        cin >> l >> c >> r1 >> r2;
        if (l == 0 && c == 0 && r1 == 0 && r2 == 0)
        {
            return 0;
        }
        double diagonal = sqrt(pow(l, 2) + pow(c, 2));
        double d1 = r1 * sqrt(2);
        double d2 = r2 * sqrt(2);
        double total = d1 + r1 + r2 + d2;
        double max = sqrt(pow(l, 2) + pow(c, 2));
        cout << total << endl;
        cout << "d max: " << max << endl;

        double diagonalFalta = r1 + r2;
        double lado = sqrt(diagonalFalta / 2);
        double totalC = r1 + r2;
        double totalL = r1 + r2;

        if (total <= max)
        {
            // if (totalC <= c && totalL <= c)
            cout << "1" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
