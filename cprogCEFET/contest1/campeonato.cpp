#include <bits/stdc++.h>

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

    vector<int> x(16);
    int in;
    int kung;
    int lu;
    int diff;
    for (int i = 0; i < 16; i++)
    {
        cin >> in;
        if (in == 1)
            kung = i;
        if (in == 9)
            lu = i;
    }
    int div1;
    int div2;
    div1 = kung / 8;
    div2 = lu / 8;
    diff = abs(div1 - div2);
    if (diff > 0)
    {
        cout << "final" << endl;
        return 0;
    }
    div1 = kung / 4;
    div2 = lu / 4;
    diff = abs(div1 - div2);
    if (diff > 0)
    {
        cout << "semifinal" << endl;
        return 0;
    }
    div1 = kung / 2;
    div2 = lu / 2;
    diff = abs(div1 - div2);
    if (diff > 0)
    {
        cout << "quartas" << endl;
        return 0;
    }
    else
    {
        cout << "oitavas" << endl;
        return 0;
    }
    return 0;
}
