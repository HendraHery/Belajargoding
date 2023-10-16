/*Membuat Program Sederhana tipe data struktur mahasiswa yang terdiri dari 3 record
yaitu : int = NIM, string = nama, float = ipk dengan Array 
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

void cetak1Mahasiswa (Mahasiswa m)
{
	
		cout << "Nim anda adalah " << m.nim <<endl;
		cout << "Nama anda adalah "<< m.nama << endl;
		cout << "IPK anda adalah "<< m.ipk << endl;
	
}
void isiArrayMahasiswa (Mahasiswa m[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "Nim = ";
		cin >> m[i].nim;
		cout << "Nama = ";
		cin >> m[i].nama;
		cout << "IPK = ";
		cin >> m[i].ipk;
	}
}

void cetakArrayMahasiswa (Mahasiswa m[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cetak1Mahasiswa (m[i]);
	}
	
}
int main ()
{
	int n = 2;
	Mahasiswa m[n];
	
	isiArrayMahasiswa (m, n);
	cetakArrayMahasiswa (m, n);
	return 0;
}
