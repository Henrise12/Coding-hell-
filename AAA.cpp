#include<iostream>
using namespace std;

void main()
{
	int i, j, classificacao, sair[4] = { 0,0,0,0 }, atores = 0, avaliacao[4][4];
	string filme[4] = { "2001:odisseia no espaco", "o padrinho", "os salteadores da arca perdida", "a lista de schindler" };
	string categoria[4] = { "Melhor Ator", "Melhor Atriz","Melhor fotografia","Melhor banda" };
	cout << "Ola bem vindo ao site rating awards\nPretendes avaliar||1\n";
	cin >> classificacao;
	for (i = 0; i < 4; i++)
	{
		cout << filme[i] << "\n";
		for (j = 0; j < 4; j++)
		{
			cout << categoria[j] << " " << "\n";
			cin >> avaliacao[i][j];
		}
	}
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			sair[i] = sair[i] + avaliacao[i][j];

		}
	}
	for ( i = 0; i < 1
		; i++)
	{
		for ( j = 0; j < 1; j++)
		{
			cout << "\n"<<avaliacao[i][j]<< "\n";
		}
	}
	
	switch (classificacao)
	{
	case 1:
	{
		avaliacao[i][j];
		break;
	}
	case 2:
	{
		break;
	}
	}
}
