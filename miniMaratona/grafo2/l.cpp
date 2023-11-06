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
    int n;
    cin >> n;

    vector<int> v;
    int n1, n2;
    bool aux = false;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> n1 >> n2;
        for (auto u : adj[n1])
        {
            if (u == n2)
            {
                aux = true;
            }
        }
        if (aux != true)
        {
            adj[n1].push_back(n2);
        }
        aux = false;
        for (auto u : adj[n2])
        {
            if (u == n1)
            {
                aux = true;
            }
        }
        if (aux != true)
        {
            adj[n2].push_back(n1);
        }
    }
    int maxSize = 0;
    int size = 0;
    int index = 0;
    for (int i = 1; i < n + 1; i++)
    {
        int size = adj[i].size();
        if (size > maxSize)
        {
            index = i;
            maxSize = size;
        }
    }
    cout << index << endl;
    return 0;
}
