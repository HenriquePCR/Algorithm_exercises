// The code can be compiled using the following command:
//  g++ -std=c++11 -O2 -Wall testName.cpp -o test

#include <bits/stdc++.h>

#define F first
#define S second

using namespace std;
int main()
{
    // solution comes here
    int n, x;
    cin >> n;
    cin >> x;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].F;
        a[i].F = i;
    }
    sort(a.begin(), a.end());
    vector<pair<int, int>> vp;
    int i = 0;
    int j = n - 1;
    int ansI;
    int ansJ;
    bool loopEnd = true;
    while (loopEnd)
    {
        if (a[i].F + a[j].F == x)
        {
            ansI = a[i].S + 1;
            ansJ = a[j].S + 1;
            cout << ansI << " " << ansJ << endl;
            break;
        }
        else if (a[i].F + a[j].F > x)
        {
            j--;
        }
        else if (a[i].F + a[j].F < x)
        {
            i++;
        }
        else if (i == j)
        {
            cout << "IMPOSSIBLE";
            break;
        }
    }
}
/*
 pair<int, int> p;
 vector<pair<int,int>> vp(10);
 vp[0].first = val;
 vp[0].second = i;
 */