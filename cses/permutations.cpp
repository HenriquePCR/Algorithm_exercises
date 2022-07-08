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

    int input;
    // vector<int> x(input);
    cin >> input;
    if (input == 2 || input == 3)
    {
        cout << "NO SOLUTION";
    }
    else
    {
        for (int i = input - 1; i > 0; i = i - 2)
        {
            // x.push_back(i);
            cout << i << " ";
        }
        for (int i = input; i > 0; i = i - 2)
        {
            // x.push_back(i);
            cout << i << " ";
        }
        }
}
