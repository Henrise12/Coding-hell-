#include<iostream>
using namespace std; 
void main()
{
	int ValoresA[10], ValoresB[10], Total[20], i, pros = 0, maior = 25
		, posicao = 1;
	for ( i = 0; i < 10; i++)
	{
		cout << "me de um numero para o primeiro array: ";
		cin >> ValoresA[i];
		cout << "me de um numero para o segundo array: ";
		cin>>ValoresB[i];
	}
	for ( i = 0; i < 20; i++)
	{
		Total[i] = ValoresA[pros];
		 i = i + 1;
		Total[i] = ValoresB[pros];
		pros = pros + 1;
	}
	for ( i = 0; i < 20; i++)
	{
		cout << Total[i];
	}
	if (Total[i] > maior)
	{
		maior = Total[i];
		posicao = 1
			;
	}
	cout << " o Maior e o:" << maior << "estava na posicao:" << posicao, "\n";
}
