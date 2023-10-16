#include <iostream>
using namespace std;

int main(){
	int a,b,c;
	char pilih,pilih2,hasil;
	cout << "Masukan Nilai Pertama : ";
	cin >>a;
	cout << "Masukan Nilai Kedua : ";
	cin >>b;
	cout << "Masukan Nilai Ketiga :";
	cin >>c;
	cout << "Masukan Operator Bilangan 1 (+),(-),(*),(/) : ";
	cin >>pilih;
//	cout << "Masukan Operator Bilangan 2 : ";
//	cin >>pilih2;
	
	switch (pilih){
		case '+':
			hasil = a+b+c;
			cout << "Hasil dari Operasi 1 : "<<hasil<<endl;
			break;
		case '-':
			hasil = a-b-c;
			cout << "Hasil dari Operasi 1 :"<<hasil<<endl;
			break;
		case '*':
			hasil = a*b*c;
			cout << "Hasil dari Operasi 1 :"<<hasil<<endl;
			break;
			
	}
	return 0;
}
