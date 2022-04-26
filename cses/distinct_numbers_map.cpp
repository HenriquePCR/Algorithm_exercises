// The code can be compiled using the following command:
//  g++ -std=c++11 -O2 -Wall testName.cpp -o test

#include <bits/stdc++.h>

using namespace std;

int main()
{
    // solution comes here
    int n;
    cin >> n;
    map<int, bool> m;
    for (int i = 0; i < n; i++)
    {
        int tmp;
        cin >> tmp;
        m[tmp] = true;
    }

    int ans = 0;
    for (auto e : m)
    {
        ans++;
    }
    cout << ans << endl;
    
 
}
