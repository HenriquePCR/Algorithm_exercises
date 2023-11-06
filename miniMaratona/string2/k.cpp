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
    string str;
    cin >> str;
    str.erase(std::remove(str.begin(), str.end(), 'k'), str.end());
    vector<string> mathV;
    string numbers;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '+' || str[i] == '*' || str[i] == '-')
        {
            string charS(1, str[i]);
            mathV.push_back(charS);
        }
        else
        {
            while (str[i] >= 48 && str[i] <= 57)
            {
                numbers.push_back(str[i]);
                i++;
            }
            i--;
            mathV.push_back(numbers);
            numbers.clear();
        }
    }
    stoi(mathV[0]);
    vector<string> ans;
    for (int i = mathV.size() - 2; i > 0; i = i - 2)
    {
        if (mathV[i] == "*")
        {
            int num1 = stoi(mathV[i - 1]);
            int num2 = stoi(mathV[i + 1]);
            int total = num1 * num2;
            mathV.erase(mathV.begin() + i + 1);
            mathV.erase(mathV.begin() + i);
            mathV[i - 1] = to_string(total);
        }
    }
    int result = stoi(mathV[0]);
    for (int i = 1; i < mathV.size(); i += 2)
    {
        if (mathV[i] == "+")
        {

            int num1 = stoi(mathV[i + 1]);

            result += num1;
        }
        else if (mathV[i] == "-")
        {
            int num1 = stoi(mathV[i + 1]);

            result -= num1;
        }
    }

    cout << result << endl;
    return 0;
}
