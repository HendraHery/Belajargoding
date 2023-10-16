#include <iostream>
using namespace std;

int main()
{
	int i,j;
	
	for (i=0;i<=9;i++) // Barisan angka
	{
		 (j=0;j<=i;j++) // Menampilkan Kolom
		{
			if (j%2==1) // Menampilkan bilangan ganjil
			cout << j<<"\t";
		}
		cout << endl;
		
	}
	
	return 0;
}
