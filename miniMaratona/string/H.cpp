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

    map<string, int> map;
    int in;
    cin >> in;
    string input;
    int n, m;
    bool ans = false;
    for (int i = 0; i < in; i++)
    {
        cin >> input;
        n = map.size();
        map.insert({input, i});
        m = map.size();
        if (m == n)
            ans = true;
    }
    if (ans)
        cout << "A funcao nao eh boa." << endl;
    else
        cout << "A funcao eh boa." << endl;
}
