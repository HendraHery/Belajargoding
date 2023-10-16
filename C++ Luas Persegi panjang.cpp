/* PROGRAM UNTUK MENGHITUNG LUAS PERSEGI PANJANG
AUTHOR  : FANDI
TANGGAL 13 SEPTEMBER 2019 */

#include <iostream>
using namespace std;

int main ()

{ 

	//Deklarasi data (tipe data - nama variabel)
	int panjang;
	int lebar;
	int luas;
	
	cout << "Masukan Panjang :"; 
	cin >> panjang; 
	
	cout << "Masukan Lebar :"; 
	cin >> lebar; 
	
	luas = panjang*lebar; 
	cout <<"Hasil :" <<luas; 
	cin.get();
	
	return 0;
}
