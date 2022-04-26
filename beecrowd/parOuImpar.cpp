#include <iostream>
#include <string>
using namespace std;
int main()
{
    int numberOfGames = 1;
    string firstPlayer;
    string secondPlayer;
    int firstNumber = 0;
    int secondNumber = 0;
    int numberOfTests = 0;
    while (true)
    {
        numberOfTests++;
        cin >> numberOfGames;
        if (numberOfGames == 0)
            break;
        cin >> firstPlayer;
        cin >> secondPlayer;
        cout << "Teste " << numberOfTests << endl;
        for (int i = 0; i < numberOfGames; i++)
        {
            cin >> firstNumber;
            cin >> secondNumber;
            if ((firstNumber + secondNumber) % 2 == 0)
                cout << firstPlayer << endl;
            else
                cout << secondPlayer << endl;
        }
        cout << "\n";
    }

    return 0;
}