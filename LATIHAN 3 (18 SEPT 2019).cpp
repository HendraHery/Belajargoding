/* MEMBUAT MENU BUBUR DIMANA PENGGUNA DITAMPILKAN ADA DUA MENU PILIHAN YAITU 1. BUBUR AYAM 2. BUBUR KACANG HIJAU
JIKA 1 MAKA AKAN MEMILIH BUBUR AYAM DAN JIKA 2 AKAN MENJADI BUBUR KACANG HIJAU
OLEH AHMAD SOLAHUDIN RIFANDI
TANGGAL 18 SEPTEMBER 2019 */
#include <iostream>
using namespace std;

int main ()

{
	int pilih; //deklarasi
	cout << "MENAMPILKAN MENU BUBUR"<<endl; //menu yang akan ditampilkan
	cin>>pilih; 
	
	if (pilih==1)
	{
		cout <<"menu bubur ayam telah disediakan"<<endl;
	}
	else if (pilih==2)
	{
		cout <<"menu kacang hijau telah disediakan"<<endl;
	
	}
	else if (pilih==3)
	{
		cout <<"menu bubur sapi telah disediakan"<<endl;
	}
	else
	{
		cout <<"menu tidak tersedia"<<endl;
	}
	
	return 0;
	
}
