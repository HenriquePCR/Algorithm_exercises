#include <iostream>
#include <string>
using namespace std;
int main()
{
    int numberOfLines = 0;
    string firstPlayer;
    string secondPlayer;
    int firstNumber = 0;
    int secondNumber = 0;
    int numberOfTests = 0;
    int letters[12];
    int lettersIndex = 0;
    int nextLetter;
    while (true)
    {
        cin >> numberOfLines;
        if (numberOfLines == 0)
            break;
        for(lettersIndex = 0;lettersIndex<12;lettersIndex++){
            cin >> nextLetter;
            letters[lettersIndex]= nextLetter

        }
    }

    return 0;
}