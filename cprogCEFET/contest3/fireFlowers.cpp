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

    int r1;
    cin >> r1;
    int x1, y1;
    cin >> x1 >> y1;

    int r2;
    cin >> r2;
    int x2, y2;
    cin >> x2 >> y2;

    int distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    cout << distance << endl;
    // if (distance < r1 + r2 && distance > abs(r1 - r2))
    if (distance > r1 + r2)
    {
        cout << "RICO" << endl;
    }
    else
    {
        cout << "MORTO" << endl;
    }
    return 0;
}
