/* MEMASUKAN PROGRAM UNTUK MENCETAK URUTAN BILANGAN DARI BILANGAN AWAL KE BILANGAN AKHIR 
DIMANA BILANGAN AWAL DAN BILANGAN AKHIR DIMASUKAN OLEH PENGGUNA DENGAN SYARAT HARUS LEBIH BESAR DARI BILANGAN AWAL
OLEH AHMAD SOLAHUDIN RIFANDI
TANGGAL 27 SEPTEMBER 
*/
#include <iostream>
using namespace std;

int main()
{
	int awal,akhir;
	cout <<"Masukan Bilangan 1 : ";
	cin>>awal;
	
	do
	{
		cout <<"Masukan Bilangan 2 : ";
		cin>>akhir;
	}
	while (akhir<awal);
	
	while (awal<=akhir){
		cout <<awal<<endl;
		awal++;
	}

	
	return 0;
}
