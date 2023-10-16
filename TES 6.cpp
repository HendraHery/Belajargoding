#include <iostream>
using namespace std;

int main ()
{
	int jumlahbaris, jumlahspasi, jumlahbintang;
	jumlahbaris = 5;
	
	for (int i = 0;1 < jumlahbaris; i++)
	{
		jumlahspasi = jumlahbaris - i - 1;
		for (int j = 0; j < jumlahspasi; j++)
		{
			cout << " ";
		}
		jumlahbintang = i + 1;
		for (int j = 0;j <jumlahbintang; j++)
		{
			cout <<"*";
		}
		cout <<endl;
	}
}
