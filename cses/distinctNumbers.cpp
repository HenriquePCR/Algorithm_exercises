// The code can be compiled using the following command:
//  g++ -std=c++11 -O2 -Wall testName.cpp -o test

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // solution comes here
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    sort(x.begin(), x.end());

    int ans = 1;
    int diff;
    for (int i = 1; i < n; i++)
    {
        if (x[i] != x[i - 1])
            ans++;
    }
    cout << ans << endl;
}
