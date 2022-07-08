#include <bits/stdc++.h>

// algumas coisas de c++
// map<int, bool> m;
// cin >> input;
// cout << output;
// vector<int> x(n);
// sort(x.begin(), x.end());

using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    // solution comes here
    long long n, sum, vSum = 0;
    deque<long long> x, y;
    cin >> n;
    long long xSize = n, ySize = 0;
    sum = n * (n + 1) / 4;
    if (n * (n + 1) % 4)
    {
        cout << "NO" << endl;
        return 0;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 1; i <= n; i++)
        {
            x.push_back(i);
        }
        for (int i = 0; i <= n; i++)
        {
            vSum += x.back();
            y.push_back(x.back());
            ySize++;
            x.pop_back();
            xSize--;
            if (vSum >= sum)
                break;

            vSum += x.front();
            y.push_back(x.front());
            ySize++;
            x.pop_front();
            xSize--;
            if (vSum >= sum)
                break;
        }
        cout << xSize << endl;
        for (auto a : x)
        {
            cout << a << " ";
        }
        cout << "\n";
        cout << ySize << endl;
        for (auto a : y)
        {
            cout << a << " ";
        }
    }
}
