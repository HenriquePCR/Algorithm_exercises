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
    for (int k = 1; k <= n; k++)
    {
        int c;
        cin >> c;

        int v;
        cin >> v;

        vector<pair<int, int>> lista(v);

        for (int i = 0; i < v; i++)
        {
            cin >> lista[i].f;
            lista[i].s = i + 1;
        }
        sort(lista.begin(), lista.end());
        int total = 0;
        vector<int> pos;
        for (int i = lista.size() - 1; i >= 0; i--)
        {
            if (total + lista[i].f <= c)
            {
                total = total + lista[i].f;
                pos.push_back(lista[i].s);
            }
            else
            {
                pos.push_back(i)
            }
        }
        cout << "Caso #" << k << ":";
        sort(pos.begin(), pos.end());
        for (auto y : pos)
        {
            cout << " " << y;
        }
        cout << endl;
    }
}
