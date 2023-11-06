#include <stdio.h>
#include <math.h>
#include <iostream>

using namespace std;

int main()
{

    /**
     * Escreva a sua solução aqui
     * Code your solution here
     * Escriba su solución aquí
     */
    long long n;
    cin >> n;
    long long l;
    cin >> l;

    double V = l / n;

    long long b, B, H;
    cin >> b >> B >> H;

    long long bCoke;
    double pi = 3.141592653589793238462643383279502884;
    double cokeA = pi * (pow(B, 2) - 2 * B * b + pow(b, 2)) / H;
    double cokeBfirst = ((2 * (B - b) * b) / H);
    double cokeBsecond = b * (B - b) / H;
    double cokeB = cokeBfirst + cokeBsecond;
    double cokeC = (2 * H * b * b + 2 * b) / H;
    double cokeD = V;
    // cout << cokeA << endl;
    // cout << cokeB << endl;
    // cout << cokeC << endl;
    // cout << cokeD << endl;
    float ans = 2.40;
    float ansT = ans * ans * ans * cokeA + ans * ans * cokeB + ans * cokeC + cokeD;
    cout << ansT << endl;
    return 0;
}