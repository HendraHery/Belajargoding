#include <iostream>
using namespace std;

int main ()
{
	int angka;
	int pilih;
	int  a,b;
	char ganjil,genap;
	
	cout <<"Masukan angka :";
	cin >>angka;
	cout<<"Masukan Pilihan 1. Ganjil 2. Genap : ";
	cin>>pilih;
	switch (pilih)
	{
		case 1:
			if (angka%2==0)
			{
				cout <<"Salah"<<pilih<<endl;
			} else {
				cout<<"Benar itu adalah ganjil";
			}
			break;
		case 2:
			if (angka%2==0)
			{
				cout <<"Benar itu adalah genap"<<endl;
			} else {
				cout<<"Salah";
			}
			break;
	cin.get();
	}
	return 0;
}
