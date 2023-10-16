#include <iostream>
using namespace std;

int main ()
{
	float a,b,c;
	char aritmatika;
	int hasil;
	
	cout <<"Masukan Nilai Pertama : ";
	cin >>a;
	cout <<"Masukan Nilai Kedua : ";
	cin >>b;
	cout <<"Masukan Nilai Ketiga : ";
	cin >>c;
	cout <<"Masukan Operator Bilangan :";
	cin >> aritmatika;
	
	switch (aritmatika)
	{
		case '+':
			hasil = a+b+c;
			cout << "Hasil Penjumlahan adalah : "<<hasil;
			break;
		case '-':
			hasil = a-b-c;
			cout << "Hasil Pengurangan adalah : "<<hasil;
			break;
		case '*':
			hasil = a*b*c;
			cout << "Hasil Perkalian adalah : "<<hasil;
			break;
		case '/':
			hasil = a/b/c;
			cout << "Hasil Pembagian adalah : "<<hasil;
			break;
		default:
			cout <<"Operator tidak diketahui : ";
			break;
	}
	
	return 0;
	
}
