/* Membuat Program Menghitung Luas Segitiga 
Oleh Fandi */

#include <iostream>
using namespace std;

int main (){
	
	cout << "Program Menghitung Luas Segitiga \n \n";
	float alas, tinggi, luas;
	
	cout << "Masukan Angka Alas : ";
	cin >> alas;
	cout << "Masukan Angka Tinggi : ";
	cin >> tinggi;
	
	luas = alas * tinggi / 2;
	cout << "Luas Segitiga Adalah : " << luas;
	
	return 0;
}
