#include<iostream>
using namespace std;
void main()
{
	int i, nmr[4], lucky[4], tentacion, choose;
	srand(time(0));
	for ( i = 0; i < 4 ; i++)
	{
		lucky[i] = rand() % 2;
		cout << lucky[i];
	}
	
}