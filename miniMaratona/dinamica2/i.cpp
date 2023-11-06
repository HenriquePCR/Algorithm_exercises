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
    _
        // solution comes here
        int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            return 0;
        }
        int par1 = 0, impar1 = 0;
        int par2 = 0;
        impar2 = 0;
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num % 2 == 0)
            {
                par1++;
            }
            else
            {
                impar1++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            int num;
            cin >> num;
            if (num % 2 == 0)
            {
                par2++;
            }
            else
            {
                impar2++;
            }
        }
    }
    return 0;
}
