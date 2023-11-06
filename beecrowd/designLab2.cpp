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

int main()
{

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        int v;
        cin >> v;
        int a;
        cin >> a;
        int n1;
        int n2;

        bool aux = true;
        for (int i = 0; i < a; i++)
        {
            aux = true;
            cin >> n1;
            cin >> n2;
            for (auto y : adj[n2])
            {
                if (n1 == y)
                    aux = false;
            }
            if (aux)
            {
                counter++;
                adj[n2].push_back(n1);
                adj[n1].push_back(n2);
            }
        }
        for (int i = 0; i < v; i++)
        {
            adj[i].clear();
        }
        cout << counter * 2 << endl;
        counter = 0;
    }

    return 0;
}