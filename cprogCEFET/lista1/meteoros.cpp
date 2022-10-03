#include <iostream>

using namespace std;

int main()
{

/**
 * Escreva a sua solução aqui
 * Code your solution here
 * Escriba su solución aquí
 */
#define ll long long
    ll x1, y1, x2, y2;
    ll met = 0;
    ll teste = 1;

    while (true)
    {
        met = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        if (x1 == 0 && x2 == 0 && y1 == 0 && y2 == 0)
            break;
        ll in;
        cin >> in;
        for (ll p = 0; p < in; p++)
        {
            ll xMet, yMet;

            cin >> xMet >> yMet;
            if (xMet >= x1 && xMet <= x2)
            {
                if (yMet <= y1 && yMet >= y2)
                    met++;
            }
        }
        cout << "Teste " << teste << endl;
        cout << met << endl;
        teste++;
    }

    return 0;
}