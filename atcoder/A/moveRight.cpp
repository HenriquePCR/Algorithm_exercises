#include <iostream>
using namespace std;

int main()
{
    char input[4];
    cin >> input;
    input[3] = input[2];
    input[2] = input[1];
    input[1] = input[0];
    input[0] = '0';
    cout << input;
    return 0;
}