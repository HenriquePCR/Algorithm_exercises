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

    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> adj[n];
    int x, y, h;
    for (int i = 0; i < e; i++)
    {
        cin >> x;
        cin >> y;
        cin >> h;
        adj[x - 1].push_back({h, y});
    }
    priority_queue<pair<int, int>> q;
    vector<int> distance(n);
    vector<bool> processed(n);

    for (int i = 1; i <= n; i++)
        distance[i] = INF;
    distance[0] = 0;
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
            if (distance[a] + w < distance[b])
            {
                distance[b] = distance[a] + w;
                q.push({-distance[b], b});
            }
        }
    }
    cout << distance[1] << endl;
    // vector<int> adj[5];
    // adj[1].push_back(2);
    // adj[2].push_back(3);
    // adj[2].push_back(4);
    // adj[3].push_back(4);
    // adj[4].push_back(1);

    // bool visited[5];

    // void dfs(int s)
    // {
    //     if (visited[s])
    //         return;
    //     visited[s] = true;
    //     // process node s
    //     for (auto u : adj[s])
    //     {
    //         dfs(u);
    //     }
    // }
    // adj[0] = [{2,5}]
    //
    //
    //
    //
    //
}
