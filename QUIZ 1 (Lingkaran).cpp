/* PROGRAM UNTUK MENGHITUNG LUAS LINGKARAN DAN KELILING LINGKARAN DIMANA INPUTAN HANYA SATU YAITU VARIABLE RADIUS BERTIPE FLOAT DAN DIMASUKAN KE USER
AUTHOR  : FANDI
TANGGAL 13 SEPTEMBER 2019 */

#include <iostream>
using namespace std;

int main ()

{ 

	//Deklarasi data (tipe data - nama variabel)
	float radius, keliling, luas;
	const float PI = 3.1416f;
	
	cout << "Masukan Radius :"; 
	cin >> radius;
	
	keliling = 2*PI*radius;
	cout <<" Hasil Keliling adalah :" <<keliling<<endl; 
	
	luas = PI*radius*radius;
	cout <<" Hasil Luas adalah :" <<luas<<endl; 
	
	return 0;
}
