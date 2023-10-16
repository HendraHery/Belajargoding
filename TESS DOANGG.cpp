#include <iostream>

using namespace std;

int main (){
	int a, b, n;
		a = 1;
		
	cout<<"Masukkan Banyaknya Baris :";
	cin>>n;
	for (int i = 1 ; i <= n ;i++){
		b = a*2;
		a = b;
		
		cout << a <<endl;
		
	}
	
	return 0;
}
