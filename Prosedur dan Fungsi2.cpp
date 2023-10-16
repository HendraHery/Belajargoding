#include <iostream>
using namespace std;

//Prosedur Ganjil Genap
void prosedurGanjilGenap (int);

int main ()
{
	int a;
	
	cout <<"Masukan Angka : ";
	cin >>a;
	
	prosedurGanjilGenap (a);
	
	return 0;
}
void prosedurGanjilGenap (int a)
{
	if (a%2==0){
		cout <<"Angka Genap";
	}
	else if (a%2==1){
		cout <<"Angka Ganjil";
	}
}
