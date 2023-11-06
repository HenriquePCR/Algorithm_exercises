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

#define V 100

vector<pair<int, int>> adj[V];
// vector<int> adj[V];
bool visited[V];
int counter = 0;

// void dfs(int s)
// {
//     counter++;
//     if (visited[s])
//         return;
//     visited[s] = true;
//     // process node s
//     for (auto u : adj[s])
//     {
//         dfs(u);
//     }
// }

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    int r, c;
    cin >> r >> c;
    
    for (int i = 0; i < c; i++)
    {
        int n1;
        cin >> n1;
        int n2;
        cin >> n2;
        int w;
        cin >> w;
        adj[n1].push_back(make_pair(n2, w));
        // adj[n1].push_back(n2);
        // adj[n2].push_back(n1);
    }

    for (int i = 0; i < r; i++)
    {
        for (auto u : adj[i])
        {
            cout << i << "-> " << u.first << " " << u.second << endl;
        }
    }

    // for (int i = 0; i < r; i++)
    // {
    //     for (auto y : adj[i])
    //     {
    //         cout << i << "->" << y.first << endl;
    //     }
    // }

    return 0;
}
