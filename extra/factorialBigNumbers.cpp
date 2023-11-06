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
    ll in;
    cin >> in;
    ll car = 0;
    deque<int> ans;
    ans.push_front(1);
    ll aux = 0;
    for (ll i = 2; i <= in; i++)
    {
        for (ll j = ans.size() - 1; j >= 0; j--)
        {
            aux = ans[j] * i + car;
            ans[j] = aux % 10;
            car = aux / 10;
        }
        while (car != 0)
        {
            ans.push_front(car % 10);
            car /= 10;
        }
    }
    for (auto y : ans)
    {
        cout << y;
    }
    cout << endl;
    return 0;
}
