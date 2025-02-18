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
			cout << "o números de pessoas não pode\nser maior que o numero de fatias"; break;
		}
		cout << "cada pessoa vai levar " << NmrF / NmrP << " pedaços\n";
		cout << "restou" << NmrF % NmrP << " pedaços seu goloso\n";
	} while (NmrF >= NmrP);
}