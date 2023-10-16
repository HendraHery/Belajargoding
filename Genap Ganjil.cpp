#include <iostream>
using namespace std;

int main(){
	int awal, akhir;
	
	cout << "Masukan Angka Awal : ";
	cin >> awal;
	
	do {
		
		cout << "Masukan Angka Akhir : ";
		cin >> akhir;
	}
	while (awal > akhir);
	
	while (akhir > awal){
		cout <<awal<<endl;
		awal+=2;
	}
		
	
	
	return 0;
}
