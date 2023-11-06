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
    double c;
    string j;
    cin >> c;
    cin >> j;
    j = j.substr(0, j.length() - 1);
    double juros = stod(j);
    int d, m, a;
    cin >> d >> m >> a;

    cout << c << " " << juros;

    double jD = c * pow((1 + juros), d);
    double totalD = c + jD;

    double jM = c * pow((1 + juros), m);
    double totalM = c + jD;

    double jA = c * pow((1 + juros), a);
    double totalA = c + jD;

    cout << "a.d = " << totalD << endl;
    cout << "a.m = " << totalM << endl;
    cout << "a.a = " << totalA << endl;
}
