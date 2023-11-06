long long mdc(long long int a, long long int b)
{
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

long long mmc(int a, int b)
{
    return (a / mdc(a, b)) * b;
}

