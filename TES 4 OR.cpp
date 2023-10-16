#include <iostream>
using namespace std;

int main ()
{
	int angka;
	
	cout << "Masukan angka 1 atau 2 : ";
	cin >> angka;
	
	if (angka == 1 || angka ==2)
	{
		cout<<angka<<endl;
	}
	else 
	{
		cout << "Salah"<<endl;
	}
	cin.get();
	return 0;
}
