/*Membuat Program Segitiga Berpola Menggunakan For 
Oleh Fandi */
#include <iostream>
using namespace std;

int main (){
	
	int n;
	
	cout << "Masukan Jumlah Baris Pola : ";
	cin >> n;
	
	cout << "\nMenampilkan dengan Angka Genap" << endl;
	
	// Menampilkan angka genap
	for (int i = 0 ; i <= n; i++ ){
		for (int j = 0 ; j <= i ; j++){
			cout << j;
		}
		cout << endl;
	}
	cout << "\n \n";
	cout << "Menampilkan dengan Angka Ganjil" << endl;
	
	// Menampilkan angka ganjil
	for (int i = 1; i <=n ; i++){
		for (int j = 1 ; j <= i ; j++){
			cout << (2*j - 1);
		}
		cout << endl;
	}
	cout << "\n \n";
	cout << "Menampilkan dengan Bintang" << endl;
	
	// Menampilkan dengan Bintang
	for (int i = 1; i <=n ; i++){
		for (int j = 1 ; j <= i ; j++){
			cout << "*";
		}
		cout << endl;
	}
	return 0;
}
