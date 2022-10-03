#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main()
{
	FILE *fp;
	char binario[5];
	char arq[100];

	printf("Digite o nome do arquivo: ");
	scanf("%s", arq);
	fp = fopen(arq, "r"); // Abre arquivo texto para leitura
	if (!fp)
	{
		printf("Erro na abertura do arquivo.\n");
		return 0;
	}

	for (int i = 0; i < 5; i++)
	{ // Lendo o valor em binario da posição que terá uma string a mais
		fscanf(fp, "%c", &binario[i]);
	}

	// converte binario para decimal
	cout << endl;
	int posicao = 0; // posição
	int casaB = 1;
	for (int i = 4; i > 0; i--)
	{
		if (binario[i] == '1')
		{
			posicao = posicao + casaB;
		}
		casaB = casaB * 2;
	}

	// salva em array cada caracter
	vector<char> vetor;
	char c;
	int num = 0;
	while (!feof(fp))
	{ // Enquanto não chegar ao final do arquivo
		fscanf(fp, "%c", &c);
		vetor.push_back(c);
		num++;
	}
	vetor.pop_back();

	// Para exibir mensagem
	cout << "--------------------" << endl;
	cout << "Mensagem codificada:" << endl;
	cout << "--------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << binario[i];
	}
	for (auto y : vetor)
	{ // verifica mensagem bruta
		cout << y;
	}
	cout << endl;

	// apaga caracter a mais
	vetor.erase(vetor.begin() + posicao - 1);

	cout << endl;
	for (auto y : vetor)
	{
		cout << y;
	}

	// troca primeiro com último, terceiro com antepenúltimo
	char aux1;
	char aux2;
	int tamanho = vetor.size();
	// cout << tamanho;
	for (int i = 0, j = tamanho - 1; i < tamanho / 2; i++, j--)
	{
		if (i % 4 == 0)
		{
			aux1 = vetor[i];
			aux2 = vetor[i + 1];
			vetor[i] = vetor[j - 1];
			vetor[i + 1] = vetor[j];
			vetor[j] = aux2;
			vetor[j - 1] = aux1;
		}
	}
	cout << endl;
	for (auto y : vetor)
	{
		cout << y; // verifica se foi feita a troca
	}
	cout << endl;

	// reflete os blocos
	char aux;
	for (int i = 0; i < tamanho; i++)
	{
		if (i % 2 == 0)
		{
			aux = vetor[i];
			vetor[i] = vetor[i + 1];
			vetor[i + 1] = aux;
		}
	}
	for (auto y : vetor)
	{ // mostra a reflexão
		cout << y;
	}
	cout << endl;

	// faz rotação a esquerda de 5 posições
	int auxC = 0;
	for (int i = 0; i < tamanho; i++)
	{
		if (vetor[i] == '#')
		{
			vetor[i] = ' ';
		}
		else if (vetor[i] - 5 >= 'A' && vetor[i] - 5 <= 'Z')
		{
			vetor[i] = vetor[i] - 5;
		}
		else if (vetor[i] - 5 >= 'a' && vetor[i] - 5 <= 'z')
		{
			vetor[i] = vetor[i] - 5;
		}
		else if (vetor[i] - 5 < 'A')
		{
			auxC = vetor[i] - 'A';
			vetor[i] = 'Z' - (4 - auxC);
		}
		else
		{
			auxC = vetor[i] - 'a';
			vetor[i] = 'z' - (4 - auxC);
		}
	}
	cout << endl;

	cout << "--------------------" << endl;
	cout << "Mensagem decodificada:" << endl;
	cout << "--------------------" << endl;
	for (auto y : vetor)
	{
		cout << y;
	}
	cout << endl;
	return 0;
}
