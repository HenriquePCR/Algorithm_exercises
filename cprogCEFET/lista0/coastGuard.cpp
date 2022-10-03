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
    int in1;
    int in2;
    int in3;
    while (cin >> in1)
    {
        cin >> in2;
        cin >> in3;
        int a = 12 * 12;
        int b = in1 * in1;
        int c = sqrt(a + b);
        int timeF = 12 / in2;
        int timeG = c / in3;
        if (timeF < timeG)
            cout << "N";
        else
            cout << "S";
        cout << endl;
    }
}
