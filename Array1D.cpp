/*NOMOR 1 INI*/
#include <iostream>
using namespace std;

int main(){
	
	int n = 5 ;
	int x;
	int a[n];
		for (int i = 0; i < n; i++){
		cout <<"Masukan anggota ke "<< i << ": ";
		cin>>a[i];
		
	}
	
	for (int i = 0; i < n; i++){
		
		cout <<" "<<a[i] << endl;
		
	}
	return 0;
}
