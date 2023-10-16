#include <iostream>
using namespace std;

//Fungsi Luas Persegi Panjang
float hitungLuasLingkaran (float, float);

int main ()
{
	float r, luas;
	const float pi = 3.141592653589793238462643383279502884197169399375105820974944592307;
	cout <<"Masukan Radius : ";
	cin >>r;
	
	luas = hitungLuasLingkaran (pi, r);
	cout <<"Luas adalah : "<<luas;
	return 0;
}

float hitungLuasLingkaran (float pi, float r)
{
	float d;
	d = pi*r*r;
	return d;
}
