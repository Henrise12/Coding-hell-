#include<iostream>
using namespace std;
void main()
{
	int nmr[5], i, N, contar = 0;
	for (i = 0; i < 5; i++)
	{
		cout << "gimme 20 numb|| " << i + 1 << "\n";
		cin >> nmr[i]
			;
	}
	cout << "gimme more 1 nmbr|| 1 \n";
	cin >> N;
       for (i = 0; i < 1; i++)
	{
		cout << "gimme more 1 nmbr|| 1 \n";
		cin >> contar;
		}
		if (nmr[i] == N)
		{
          contar ++
		;}if (contar > 0)
		  {
			  cout << "acertou viado\n";
		  }
		else
		  {
			  cout << "nao havia nenhum numero";
		  }
	
  
	
}