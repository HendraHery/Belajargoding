/* MEMASUKAN PROGRAM UNTUK MENCETAK URUTAN BILANGAN DARI BILANGAN AWAL KE BILANGAN AKHIR 
DIMANA BILANGAN AWAL DAN BILANGAN AKHIR DIMASUKAN OLEH PENGGUNA DENGAN SYARAT HARUS LEBIH BESAR DARI BILANGAN AWAL
OLEH AHMAD SOLAHUDIN RIFANDI
TANGGAL 27 SEPTEMBER 
*/
#include <iostream>
using namespace std;

int main()
{
	int i,j;
	cout <<"Masukan Bilangan 1 : ";
	cin>>i;
	
	do
	{
		cout <<"Masukan Bilangan 2 : ";
		cin>>j;
	}
	while (j<i);
	while (i<=j){
		cout <<i<<endl;
		i++;
	}

	
	return 0;
}
