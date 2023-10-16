#include <iostream>
using namespace std;


// PROSEDUR LUAS SEGITIGA
void hitungLuasSegitiga (int, int, int);

int main ()
{
	int a, t, luas;
	
	cout<<"Masukan Alas : ";
	cin >>a;
	cout<<"Masukan Tinggi : ";
	cin >>t;
	
	hitungLuasSegitiga (a,t,luas);
	
	return 0;	
}
void hitungLuasSegitiga (int a, int t, int luas)
{
	luas = a*t/2;
	cout << "Luas adalah : "<< luas<<endl;
}

