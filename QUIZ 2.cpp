/* MEMBUAT PROGRAM KALKULATOR YAITU 1. MENU PENAMBAHAN 2. MENU PENGURANGAN 3. MENU PERKALIAN 
MENENTUKAN KEDUA INT INPUT DARI USER DAN DISERTAI MENU PILIHAN OPERATOR DAN DITANDAI HASIL OPERASINYA
OLEH AHMAD SOLAHUDIN RIFANDI 
TANGGAL 18 SEPTEMBER */
#include <iostream>
using namespace std;

int main ()

{
	int hasil;
	int a;
	int b;
	char simbol;
	
	cout <<"Masukan Bilangan 1 : ";
	cin  >>a;
	
	cout <<"Masukan Bilangan 2 : ";
	cin  >>b;
	
	cout <<"Masukan Operator Perhitungan :";
	cin >>simbol;
	
	switch (simbol){
		case '+':
			hasil = a+b;
			cout << "Hasil Penambahan :"<<hasil<<endl;
			break;
		case  '-':
			hasil = a-b;
			cout << "Hasil Pengurangan :"<<hasil<<endl;
			break;
		case '*':
			hasil = a*b;
			cout <<"Hasil Perkalian :"<<hasil<<endl;
			break;		
	}

	return 0;
}
