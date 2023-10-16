/* MEMBUAT PROGRAM UNTUK MENAMPILKAN BILANGAN BULAT POSITIF DIMANA MASUKAN BILANGAN DARI INPUT PENGGUNA
	KEMUDIAN MENENTUKAN BILANGAN POSITIF TERSEBUT APAKAH GANJIL ATAU GENAP.
	Contoh Output :
	Masukan Bilangan Bulat Positif  : -100
	Masukan Bilangan Bulat Positif : 100
	Bilangan 100 Adalah Bilangan genap
OLEH AHMAD SOLAHUDIN RIFANDI
TANGGAL 27 SEPTEMBER 2019
*/
#include <iostream>
using namespace std;

int main()
{
	int i;
	do
	{	
	
	cout<<"Masukan Bilangan Bulat Positif : ";
	cin >>i;
		
	
	}
	while (i<=0);
	if (i%2==0)
	{
		cout<<"Bilangan itu adalah Bilangan genap."<<endl;
	}
	else 
	{
		cout<<i<<" adalah Bilangan Ganjil."<<endl;

	}
	return 0;
}
