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

int main()
{
    // solution comes here
    unsigned long long in;
    vector<unsigned long long> v1;
    vector<unsigned long long> v2;
    while (cin >> in)
    {
        v1.push_back(in);
        v2.push_back(in);
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end(), greater<unsigned long long>());
    for (int i = 0; i < v1.size() - 1; i++)
    {
        cout << v1[i] << " ";
    }
    cout << v1[v1.size() - 1] << endl;
    for (int i = 0; i < v2.size() - 1; i++)
    {
        cout << v2[i] << " ";
    }
    cout << v2[v2.size() - 1] << endl;

    return 0;
}
