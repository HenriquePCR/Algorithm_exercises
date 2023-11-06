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

int primenumber(int number)
{
    if (number == 2)
    {
        return number;
    }
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
            return 0;
    }
    return number;
}

int main()
{
    // solution comes here
    int n1;
    cin >> n1;
    int n2;
    cin >> n2;
    vector<int> v;
    for (int i = 1; i < abs(n2 - n1); i++)
    {
        v.push_back(min(n1, n2) + i);
    }
    vector<int> ans;
    int aux;
    int cont = 0;
    for (auto y : v)
    {
        aux = primenumber(y);
        if (aux != 0)
        {
            ans.push_back(aux);
            cont++;
        }
    }
    if (cont == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    if (n1 > n2)
    {
        sort(ans.begin(), ans.end(), greater<int>());
    }
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << " ";
    }
    cout << ans[ans.size() - 1] << endl;

    return 0;
}
