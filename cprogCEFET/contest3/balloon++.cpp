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

    float pi = 3.1415;
    float in;
    cin >> in;
    float max;
    cin >> max;
    float rCube = in * in * in;
    float volume = (4 * rCube * pi) / 3;
    ll ans = max / volume;
    cout << ans << endl;
}
