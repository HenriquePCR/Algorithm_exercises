#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int casos;
    cin >> casos;
    for (int c = casos; c > 0; c--)
    {
        long double ano1, ano2;
        long double med1, med2;
        cin >> ano1 >> med1 >> ano2 >> med2;
        long double r = (med2 - med1) / (ano2 - ano1);
        ceil(r);
        cout << r << endl;
    }
    return 0;
}