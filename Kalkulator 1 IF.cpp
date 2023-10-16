#include <iostream>
using namespace std;

int main ()
{
	int a, b;
	int angka;
	cout <<"Masukan nilai pertama : ";
	cin >>a;
	cout <<"Masukan nilai kedua : ";
	cin >>b;
	
	cout <<"1. Penjumlahan"<<endl;
	cout <<"2. Pengurangan"<<endl;
	cout <<"3. Pembagian"<<endl;
	cout <<"4. Perkalian"<<endl;
	cout <<"5. Modulus"<<endl;
	cout <<"Masukan Operator Nilai : ";
	cin >>angka;
	
	if (angka == 1)
		{
		angka = a+b;
		cout << a << " + " << b << " = "<< angka << endl;
		cout << "Hasil dari Penjumlahan adalah : "<<angka<<endl;
		cout << "Ini adalah operasi penjumlahan"<<endl;
		}
	else if (angka == 2)
		{
		angka = a-b;
		cout << a << " - " << b << " = "<< angka << endl;
		cout << "Hasil dari Pengurangan adalah : "<<angka<<endl;
		cout << "Ini adalah operasi pengurangan"<<endl;
		}
	else if (angka == 3)
		{
		angka = a/b;
		cout << a << " / " << b << " = "<< angka << endl;
		cout << "Hasil dari Pembagian adalah : "<<angka<<endl;
		cout << "Ini adalah operasi pembagian"<<endl;
		}
	else if (angka == 4)
		{
		angka = a*b;
		cout << a << " x " << b << " = "<< angka << endl;
		cout << "Hasil dari Perkalian adalah : "<<angka<<endl;
		cout << "Ini adalah operasi perkalian"<<endl;
		}	
	else if (angka == 5)
		{
		angka = a%b;
		cout << a << " % " << b << " = "<< angka << endl;
		cout << "Hasil dari modulus adalah : "<<angka<<endl;
		cout << "Ini adalah operasi modulus"<<endl;
		}
		else
	
	cin.get();
	return 0;
}
