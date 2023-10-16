#include <iostream>
using namespace std;


//MEMBUAT POLA BINTANG SEGITIGA
int main (){

	int n;
	cout << "Masukan Angka : ";
	cin >> n;
	
	for (int i = 1; i <= n; i++){
		for (int j = n; j > i;j--){
			cout << " ";
		}
		for (int k = 1; k <= i;k++){
			cout << "*";
		}
		cout <<endl;
	}
	
	cin.get();
	return 0;
}
