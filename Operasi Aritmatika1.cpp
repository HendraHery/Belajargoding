#include <iostream>
using namespace std;

int main(){
	
	int a = 8;
	int b = 4;
	int hasil;
	
	// Operasi Perhitungan ada 5 yaitu +, -, *, /, %.
	
	//Penjumlahan
	hasil = a + b;
	cout << a << " + " << b << " = " << hasil<< endl;
	
	//Pengurangan
	hasil = a - b;
	cout << a << " - " << b << " = " << hasil<< endl;

	//Perkalian
	hasil = a * b;
	cout << a << " x " << b << " = " << hasil<<endl;
	
	//Pembagian
	hasil = a / b;
	cout << a << " : " << b << " = " << hasil<<endl;
	
	//Modulus ( Sisa Hasil Bagi )
	hasil = a + b;
	cout << a << " + " << b << " = " << hasil<<endl;
	
	
	//Urutan Eksekusi
	hasil = (a - b) * a;
	cout << a << " - " << b<< " * " << a << " = "<<hasil <<endl;
		
	cin.get();
	return 0;
}
