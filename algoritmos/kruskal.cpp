#include <bits/stdc++.h>
#define dbg(x) cout << #x << " = " << x << endl
#define f first
#define s second
using namespace std;

#define _                        \
    ios_base::sync_withstdio(0); \
    cin.tie(0);

typedef long long ll;

const int INF = 0x7f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

vector<int> id;
vector<pair<int, pair<int, int>>> arestas;

int find(int p) { return id[p]; }

void uni(int p, int q)
{ // O(N)
    p = find(p), q = find(q);
    if (q == p)
        return;
    for (int i = 0; i < id.size(); i++)
        if (id[i] == p)
            id[i] = q;
}

int main()
{
    ;

    ll r, c;
    cin >> r >> c;

    id = vector<int>(r);
    arestas = vector<pair<int, pair<int, int>>>();

    for (int i = 0; i < r; i++)
    {
        id[i] = i;
    }

    for (int i = 0; i < c; i++)
    {
        ll v, w, p;
        cin >> v >> w >> p;
        arestas.push_back({p, {v - 1, w - 1}});
    }
    sort(arestas.begin(), arestas.end());
    int cost = 0;
    for (auto p : arestas)
    {
        ll a = p.s.f;
        ll b = p.s.s;
        ll w = p.f;
        if (find(a) != find(b))
        {
            uni(a, b);
            cost += w;
        }
    }
    cout << cost << endl;
}