/* Buatlah program konversi Nilai N dari Skala 100 menjadi skala huruf dengan kriteria berikut :
	A: 86-100
	B: 76-85
	c: 61-75
	D: 51-60
	E: 0-50
	dan memunculkan tulisan "Nilai Invalid jika dimasukan input angka yang lebih dari 100
*/
#include <iostream>
using namespace std;

int main ()
{
	int nilai;
	cout << "Masukan Nilai Anda : "<<endl;
	cin >>nilai;
	if (nilai >=86 && nilai <=100) // Jika nilai sama/lebih dari 86 dan kurang dari/sama dengan 100
	{
		cout << "Nilai A"<<endl; // maka nilai A
	}
	else if (nilai >=76 && nilai <=85) // jika nilai sama/lebih dari 76 dan kurang dari/sama dengan 85
	{
		cout << "Niai B"<<endl; // maka nilai B
	}
	else if (nilai >=61 && nilai <=75) // jika nilai sama/lebih dari 61 dan kurang dari/sama dengan 75
	{
		cout << "Nilai C"<<endl; // maka nilai C
	}
	else if (nilai >=51 && nilai <=60) // jika nilai sama/lebih dari 51 dan kurang dari/sama dengan 60	
	{
		cout << "Nilai D"<<endl; // maka nilai D
	}
	else if (nilai >=0 && nilai <=50) // jika nilai sama/lebih dari 0 dan kurang dari/sama dengan 50
	{
		cout << "Nilai E"<<endl; // maka nilai E
	}
	else 							// jika nilai lebih dari 100
	{
		cout << "Nilai Invalid"<<endl; // maka nilai invalid
	}
	cin.get();
	return 0;
}
