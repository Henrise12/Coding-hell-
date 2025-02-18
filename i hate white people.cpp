#include<iostream>
using namespace std;
void main()
{
	int i, resposta, escolha;
	string vidro[4] = {"GarrafaVidro", "CopoVidro", "Jarra", "PratoVidro"};
	string plastico[4] = {"GarrafaPET", "CopoPlastico", "SacolaPlastica", "CanudoPlastico" };
	string papel[3] = {"Guardanapo", "Jornal", "PapelA4"};
	do
	{
		cout << "|bem vindo ao taca lixo|\n|para jogar pressione - 1|\n|para ver raking pressione - 2|\n|para sair pressione - 0|\n";
		cin >> resposta;

		for ( i = 0; i < 1; i++)
		{
			cout << "escolha o reciclado\n|vidro-1|\n\papel-2|\n|papel-3|\n";
			cin << escolha;
			if (escolha)
			{
				
			}
		}
		switch (resposta)
		{
		case 0:
		{
			break;
		}
		case 1:
		{

			break;
		}
		case 2:
		{

			break;
		}
		}
	} while (resposta / 0);
}