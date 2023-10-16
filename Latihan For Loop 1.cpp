#include <iostream>
using namespace std;

int main()
{
	float hasil;
	cout <<"Awal dari Program\n \n";
	
	cout <<"Loop 1"<<endl;
	
	for (hasil = 1; hasil <=10; hasil++)
	{
		cout << hasil <<endl;
	}
	cout <<"Loop 2"<<endl;
	
	for (hasil = 1.2; hasil <=20; hasil+=0.2)
		{
		cout << hasil <<endl;
		}
	cout <<"Loop 3"<<endl;
	
	for (hasil = 1; hasil >=-20; hasil--)
		{
		cout << hasil <<endl;	
		}
		cout <<"Loop 4"<<endl;
		int jumlah = 0;
	for (hasil = 1; hasil <=20; jumlah +=hasil, hasil++)
		{
		cout << hasil << "+"<< jumlah <<endl;	
		}
	cout << "Akhir Dari Program\n";
	return 0;
}
