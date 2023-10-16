/*Membuat Program Sederhana tipe data struktur mahasiswa yang terdiri dari 3 record
yaitu : int = NIM, string = nama, float = ipk 
Oleh FANDI
tanggal 8 November 2019*/

#include <iostream>
using namespace std;

typedef struct
{
	int nim;
	string nama;
	float ipk;
}Mahasiswa;

int main ()
{
	Mahasiswa m;
	
	m.nim = 101;
	m.nama = "Fandi";
	m.ipk = 3.25;
	
	cout << "Nim = " << m.nim <<endl;
	cout << "Nama = " << m.nama << endl;
	cout << "IPK = " << m.ipk << endl;
	return 0;
}
