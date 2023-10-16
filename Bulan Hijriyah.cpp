#include <iostream>
using namespace std;

int main(){
	int angka;
	cout <<"Masukan Bulan Hijriyah dari 1 s.d 12 : ";
	cin >>angka;
	
	switch(angka)
	{
		case 1:
			cout <<"Muharram"<<endl;
			break;
		case 2:
			cout <<"Safar"<<endl;
			break;
		case 3:
			cout <<"Rabi'ul awal"<<endl;
			break;
		case 4:
			cout <<"Rabi'ul Akhir"<<endl;
			break;
		case 5:
			cout <<"Jumadil Awal"<<endl;
			break;
		case 6:
			cout <<"Jumadil Akhir"<<endl;
			break;
		case 7:
			cout <<"Rajab"<<endl;
			break;
		case 8:
			cout <<"Sya'ban'"<<endl;
			break;
		case 9:
			cout <<"Ramadhan"<<endl;
			break;
		case 10:
			cout <<"Syawal"<<endl;
			break;
		case 11:
			cout <<"Dzulka'dah"<<endl;
			break;
		case 12:
			cout <<"Dzulhijah"<<endl;
			break;
		default:
			cout <<"Bulan yang anda masukan salah"<<endl;
			break;
		
	}
	
	cin.get();		
	return 0;
}
