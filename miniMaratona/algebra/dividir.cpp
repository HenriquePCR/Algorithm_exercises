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
    vector<int> fraction(n);
    vector<int> prej(n);
    int total;
    float prejuizo = 0;
    while (true)
    {
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                int num;
                cin >> num;
                if (num == -1)
                {
                    goto printar;
                }
                fraction[i] = num;
                total += num;
            }
            float price;
            cin >> price;
            for (int i = 0; i < n; i++)
            {
                if (i == j)
                {
                    prej[i] += price * fraction[i];
                }
                else
                {
                    prej[i] -= price * fraction[i];
                }
            }
        }
    }
printar:
    for (int i = 0; i < n; i++)
    {
        if (prej[i] < 0)
            cout << "irmao " << n + 1 << "deve" << prej[i];
        else if (prej[i] > 0)
            cout << "irmao " << n + 1 << "recebe" << prej[i];
    }
}
