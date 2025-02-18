#include<iostream>
using namespace std;
void main()
{
	int i, j, numero[13], casa, numeros, soma = 0;
	for ( i = 0; i < 13; i++)
	{
		cin>>numero[i];
	}
	for (i = 0; i <12; i++)
	{
		if (i % 2 == 0)
		{
			soma = soma + numero[i];
		}
		else
		{
			soma = soma + (numero[i] * 3);
		}
	}
	cout << soma;
	if (soma)
	{
		soma <= 3;
		cout << "\n""erro";
	}
}