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

#define V 100

vector<int> adj[V];
bool visited[V];
int counter = 0;

void dfs(int s)
{
    counter++;
    if (visited[s])
    {
        return;
    }

    visited[s] = true;
    // process node s
    for (auto u : adj[s])
    {
        dfs(u);
    }
}

int main()
{
    // solution comes here
    vector<int> distance(V);
    queue<int> q;
    int n;
    cin >> n;
    bool firstN = true;
    int fN = 0;

    int n1, n2;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> n1 >> n2;
        if (firstN)
        {
            fN = n1;
            firstN = false;
        }
        adj[n1].push_back(n2);
    }
    visited[fN] = true;
    distance[fN] = 0;
    q.push(fN);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        // process node s
        for (auto u : adj[s])
        {
            if (visited[u])
                continue;
            visited[u] = true;
            distance[u] = distance[s] + 1;
            q.push(u);
        }
    }
    int max = *max_element(distance.begin(), distance.end());
    cout << max << endl;
}
