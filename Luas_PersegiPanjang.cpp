/* Membuat Program Luas Persegi panjang
Oleh Fandi
*/
#include <iostream>
using namespace std;

int main (){
	
	
	// Program Menghitung Luas Persegi panjang 
	cout <<"Ini adalah Program Menghitung Luas Persegi Panjang \n \n " ;
	
	int panjang, lebar, luas;
	
	cout << "Masukan Angka Panjang : ";
	cin >> panjang;
	cout << "Masukan Angka Lebar : ";
	cin >> lebar;
	
	luas = panjang * lebar;
	cout << "Luas Persegi Panjang adalah : " << luas << endl;
	
	
	return 0;
}
