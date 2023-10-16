/*Membuat Prosedur untuk menukar nilai dari 2 parameter 
oleh fandi tanggal 16 Oktober 2019 
*/
#include <iostream>
using namespace std;

void menukarNilai (int &a, int &b); // Menggunakan simbol dan (&) agar dapat ditukar saat berada dalam body (int main)

int main()
{
	
	int a, b;
	cout <<"Masukan Nilai A : ";
	cin >>a;
	cout <<"Masukan Nilai B : ";
	cin >>b;
	menukarNilai(a,b);
	cout <<"Hasil : " << a << endl;
	cout <<"Hasil : " << b << endl;
	
	
	cin.get();
	return 0;
}

void menukarNilai (int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
	
}


