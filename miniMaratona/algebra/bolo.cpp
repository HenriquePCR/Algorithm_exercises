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

    int n;
    cin >> n;
    int ans;
    int aux;
    bool one = true;
    bool two = false;
    set<int> set;
    bool auxBool = false;

    for (int i = 0; i < n; i++)
    {
        if (one)
        {
            ans = (5 + i) * 2;
            if (set.find(ans) != set.end())
                set.insert(ans);
            else
            {
                i++;
                auxBool = true;
            }
        }
        else{
            
        }
    }

        if (n % 2 == 0)
    {
        ans = 5 + (n - 2) / 2;
    }
    else
    {
        aux = 5 + (n - 1) / 2;
        ans = aux * 2;
    }
    cout << ans << endl;
}
