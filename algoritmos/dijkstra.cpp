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

vector<vector<pair<int, int>>> adj;
vector<int> dist;
priority_queue<pair<int, int>> q;
vector<pair<int, int>> previous;
vector<bool> processed;

void dijkstra()
{
    dist[0] = 0;
    q.push({0, 0});
    while (!q.empty())
    {
        int a = q.top().second;
        q.pop();
        if (processed[a])
            continue;
        processed[a] = true;
        for (auto u : adj[a])
        {
            int b = u.first, w = u.second;
            if (dist[a] + w < dist[b])
            {
                dist[b] = dist[a] + w;
                previous[b].first = a;
                previous[b].s = w;
                q.push({-dist[b], b});
            }
        }
    }
}

int main()
{
    //enunciado da questão do beeecrowd routers
    ll r, c;
    cin >> r >> c;
    adj = vector<vector<pair<int, int>>>(r);
    dist = vector<int>(r, INF);
    processed = vector<bool>(r, false);
    previous = vector<pair<int, int>>(r, {-1, 0});

    for (int i = 0; i < c; i++)
    {
        ll v, w, p;
        cin >> v >> w >> p;
        adj[v - 1].push_back({w - 1, p});
        adj[w - 1].push_back({v - 1, p});
    }
    dijkstra();
    int total = 0;
    cout << "previous" << endl
         << endl;
    for (int i = 0; i < r; i++)
    {
        if (previous[i].first != -1)
        {
            total += previous[i].second;
            cout << i + 1 << " " << previous[i].first + 1 << " " << previous[i].second << endl;
        }
    }
    cout << total << endl;
    return 0;
}
