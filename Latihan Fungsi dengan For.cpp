/*Membuat Fungsi jumlah bilangan dengan satu parameter integer dengan asumsi 
	bahwa nilai integer itu angkanya lebih dari 1 nilainya dan mengembalikan nilai bilangan antara bilangan 1 s/d n
*/
#include <iostream>
using namespace std;

int jumlahBilangan (int n)
{
	int jumlah;
	for (int i = 0;i <= n ;i++)
	{
		jumlah += i;
	}
	return jumlah;
}

int main()
{
	
	int n, jumlah;
	cout << "Masukan angka : ";
	cin >> n;
	
	jumlah = jumlahBilangan(n);
	cout << "Jumlah : " << jumlah;

	return 0;
}

