#include<iostream>
using namespace std;
int main()
{
	int i, condicao, nmr[100];
	string homem[5];
	string aleatorio[5];
	string places[5];
	string namoradas[5] = { "Joana","Daniela","Tai","Nuria","Rita" };
	string Locais[5] = { "cinema","casa","shopping","lotaria","parque" };
	srand(time(0));
	cout << "quer que seja em ordem aleatoria prime 0 ou por escrita 1 se pretende juntar pares prima 2,se pretende descobrir o amor prima 3 \n";
	cin >> condicao;
	switch (condicao)
	{
	case 0:
	{
		cout << namoradas[rand() % 5] << " ira te encontrar no(a) " << Locais[rand() % 5] << "\n";
		break;
	}

	case 1:
	{
		for (i = 0; i < 5; i++)
		{
			cout << "da o nome das 5 namoradas,namorada nmr " << i + 1 << "\n";
			cin >> aleatorio[i];

		}
		for (i = 0; i < 5; i++)
		{
			cout << "diga o nome dos locais,local nmr " << i + 1 << "\n";
			cin >> places[i];
		}cout << aleatorio[rand() % 5] << " ira te encontrar no(a) " << places[rand() % 5] << "\n";
	}break;

	case 2:
	{
		for (i = 0; i < 5; i++)
		{
			cout << "da o nome das 5 namoradas,namorada nmr " << i + 1 << "\n";
			cin >> aleatorio[i];

		}
		for (i = 0; i < 5; i++)
		{
			cout << "da o nome de 5 homens,homem nmr " << i + 1 << "\n";
			cin >> homem[i];

		}
		for (i = 0; i < 5; i++)
		{
			cout << "diga o nome dos locais,local nmr " << i + 1 << "\n";
			cin >> places[i];
		}cout << aleatorio[rand() % 5] << " ira encontrar se com o " << homem[rand() % 5] << " no(a) " << places[rand() % 5] << "\n";
	}break;
	case 3:
	{
		for (i = 0; i < 1; i++)
		{
			cout << "me de o seu nome " << i + 1 << "\n";
			cin >> aleatorio[i];

		}
		for (i = 0; i < 1; i++)
		{
			cout << "me de o nome da sua amada " << i + 1 << "\n";
			cin >> homem[i];

		}
		for (i = 0; i < 1; i++)
		{
			cout << aleatorio[rand() % 5] << " a sua porcentagem de amor com a sua amada e de " << nmr[rand() % 5] << " e irao encontrar se no(a) " << places[rand() % 5] << "\n";
			cin >> places[i];
		}cout << aleatorio[rand() % 5] << " ira encontrar se com o " << homem[rand() % 5] << " no(a) " << places[rand() % 5] << "\n";
	}
	}
}