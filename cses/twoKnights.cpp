// The code can be compiled using the following command:
//  g++ -std=c++11 -O2 -Wall testName.cpp -o test

#include <bits/stdc++.h>

using namespace std;
int main()
{
    // solution comes here
    long long totalCombinations = 0;
    long long knightsClash = 0;
    long long total = 0;
    long long input;
    cin >> input;

    for (long long i = 1; i <= input; i++)
    {
        totalCombinations = ((i * i) * (i * i - 1)) / 2;
        knightsClash = 4 * (i - 1) * (i - 2);
        total = totalCombinations - knightsClash;
        cout << total << endl;
    }
    return 0;
}