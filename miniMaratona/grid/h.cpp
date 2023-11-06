#include <iostream>
#include <bits/stdc++.h>
#include <map>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long mat[n][n];
    map<long long, long long> m;

    for (int y = 0; y < n; y++)
    {
        for (int x = 0; x < n; x++)
        {
            cin >> mat[y][x];
            long long aux = mat[y][x];
            if (m.find(aux) == m.end())
            {
                // not found
                m[aux] = 1;
            }
            else
            {
                m[aux]++;
            }
            for (auto p : m)
            {
                if (p.second > n)
                {
                    cout << 0 << endl;
                }
                else
                {
                    cout << 1 << endl;
                }
            }
        }
    }
    return 0;
}