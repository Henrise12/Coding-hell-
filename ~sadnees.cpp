#include<iostream>
using namespace std;
int main()
{
	int NmrF, NmrP;
	do {
		cout << "quantos golosos ?\n ";
		cin >> NmrP;
		cout << "quantas fatias de bolo?\n";
		cin >> NmrF;
		if (NmrP > NmrF)
		{
			cout << "o n�meros de pessoas n�o pode\nser maior que o numero de fatias"; break;
		}
		cout << "cada pessoa vai levar " << NmrF / NmrP << " peda�os\n";
		cout << "restou" << NmrF % NmrP << " peda�os seu goloso\n";
	} while (NmrF >= NmrP);
}