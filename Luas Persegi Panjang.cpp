#include <iostream>
using namespace std;

int main ()

{ 

	int panjang;
	int lebar;
	int luas;
	
	cout << " Masukan Panjang :";
	cin >> panjang;
	
	cout << " Masukan Lebar :";
	cin >> lebar;
	
	luas = panjang*lebar;
	cout <<"Hasil :" <<luas;
	cin.get();
	return 0;
}
