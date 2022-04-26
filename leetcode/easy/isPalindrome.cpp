#include <math.h>
class Solution
{
public:
    bool isPalindrome(int x)
    {
        int quotient = x;
        int y = x;
        int size = 0;
        int error = 0;
        bool solution = false;
        if (x < 0)
            return false;
        if (x == 0)
            return true;
        while (quotient >= 1)
        {
            quotient = quotient / 10;
            size++;
        }
        printf("(%d)", size);
        int input[size + 1];
        int inputCounter = 0;
        for (int j = size - 1; j >= 0; j--)
        {
            int algarism = y / int(pow(10, j));
            y = y - algarism * int(pow(10, j));
            input[inputCounter] = algarism;
            printf(" %d", algarism);
            inputCounter++;
        }
        int sizeAux = size - 1;
        for (int k = 0; k < size; k++)
        {
            if (input[k] == input[sizeAux])
                solution = true;
            else
            {
                error++;
            }
            sizeAux--;
        }
        if (error > 0)
            solution = false;
        return solution;
    }
};