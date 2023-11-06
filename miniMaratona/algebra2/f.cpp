#include <bits/stdc++.h>

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

int mdc(int a, int b)
{
    if (b == 0)
        return a;
    return mdc(b, a % b);
}

int main()
{
    // solution comes here

    int x;
    vector<int> v;
    while (cin >> x)
    {
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    int ans = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        ans = mdc(ans, v[i]);
    }
    cout << ans << endl;
}
estado = estadoInicial;
manterCaractere = false;
while N˜ao fim do arquivo do
    if manterCaractere then
        manterCaractere = false;
    else
        caractere = nextChar();
        end
    switch estado do
        case 1 do
            switch caractere do
                case $ do estado = 2;
                case > do estado = 4;
                case ! do estado = 7;
                otherwise do Erro l´exico;
        end
        case 2 do
            switch caractere do
                case letra do estado = 3;
                otherwise do Erro l´exico;
        end
        case 3 do
            switch caractere do
            case letra ou digito do estado = 3;
            otherwise do Reconhece identificador;
        end
        case 4 do
            switch caractere do
            case > do Reconhece operador >>;
            otherwise do Reconhece operador >;
        end
        case 7 do
            switch caractere do
            case = do Reconhece operador ! =;
            otherwise do Reconhece operador !;
        end
    otherwise do Erro l´exico;
    end
end

