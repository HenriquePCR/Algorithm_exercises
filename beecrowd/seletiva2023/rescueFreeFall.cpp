#include <bits/stdc++.h>

// vector<vector<int>> matrix(RR, vector<int>(CC));

using namespace std;

#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define f first
#define s second

int main()
{
    // solution comes here
    int t;
    cin >> t;
    while (t--)
    {
        int nV;
        cin >> nV;
        vector<pair<int, int>> v;
        vector<pair<double, pair<int, int>>> arestas;
        for (int i = 0; i < nV; i++)
        {
            int x, y;
            cin >> x >> y;
            v.push_back({x, y});
        }
        for (int i = 0; i < nV; i++)
        {
            for (int j = 0; j < nV; j++)
            {
                double d = sqrt(
                    abs(v[j].f - v[i].f) * abs(v[j].f - v[i].f) +
                    abs(v[j].s - v[i].s) * abs(v[j].s - v[i].s));

                arestas.push_back({d, {i, j}});
            }
        }
        sort(arestas.begin(), arestas.end());
        double cost = 0;

        vector<int> id(nV);
        for (int i = 0; i < nV; i++)
        {
            id[i] = i;
        }
        for (auto p : arestas)
        {

            int x = p.s.f;
            int y = p.s.s;
            double w = p.f;
            if (id[x] != id[y])
            {
                cost += w;
                int old_id = id[x], new_id = id[y];
                for (int i = 0; i < nV; i++)
                    if (id[i] == old_id)
                    {
                        id[i] = new_id;
                    }
            }
        }
        printf("%.2lf\n", (cost / 100));
    }
    return 0;
}