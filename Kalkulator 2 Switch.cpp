#include <iostream>
using namespace std;

int main ()
{
	float a,b;
	char simbol;
	int angka;
	cout << "Masukan Nilai Pertama : ";
	cin >>a;
	cout << "Masukan Nilai Kedua : ";
	cin >>b;
	cout << "Masukan Operator Angka (+),(-),(/),(*) : ";
	cin >>simbol;
	
	switch (simbol)
	{
		case '+':
			angka = a + b;
			cout << a << " + " << b << " = "<< angka <<endl;
			cout << "Hasil dari Penjumlahan adalah : "<< angka << endl;
		break;
		case '-':
			angka = a - b;
			cout << a << " - " << b << " = "<<angka<<endl;
			cout << "Hasil dari Pengurangan adalah : "<< angka << endl;
		break;
		case '/':
			angka = a / b;
			cout << a << " / " << b << " = "<<angka<<endl;
			cout << "Hasil dari Pembagian adalah : "<< angka << endl;
		break;
		case '*':
			angka = a * b;
			cout << a << " x " << b << " = "<<angka<<endl;
			cout << "Hasil dari Perkalian adalah : "<< angka << endl;
		break;
//		case '%':
//			angka = a % b;
//			cout << a << " % " << b << " = "<<angka<<endl;
//			cout << "Hasil dan Modulus adalah : "<< angka << endl;
//		break;
	}
		return 0;
}
