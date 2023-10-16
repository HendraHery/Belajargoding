#include <iostream>
using namespace std;

int main ()
{
	int a = 3;
	int b = 2;
	
	bool hasil;
	
	// Operator Logika (Standar) Ada 3 : and, or dan not
	
	// simbol and ( and/&& ), or (or/||), (not/!)
	
	// Operator and : kedua nilai benar maka akan menjadi True
	
	cout << "Operator and"<<endl;
	hasil = (a == 3) and (b == 2); // True dan True
	cout << hasil << endl;
	hasil = (a == 3) and (b == 3); // True dan False
	cout << hasil << endl;
	hasil = (a == 4) && (b == 2); // False dan True
	cout << hasil << endl;
	hasil = (a == 4) && (b == 3); // False dan False
	cout << hasil << endl;
	
	// Operator or : Bernilai benar bila salah satu nilai True
	
	cout << "Operator or"<<endl;
	hasil = (a == 3) or (b == 2); // True dan True
	cout << hasil << endl;
	hasil = (a == 3) or (b == 3); // True dan False
	cout << hasil << endl;
	hasil = (a == 4) || (b == 2); // False dan True
	cout << hasil << endl;
	hasil = (a == 4) || (b == 3); // False dan False
	cout << hasil << endl;
	
	// Operator not (negasi) : kebalikan dari nilai itu sendiri 
	
	cout << "Operator not"<<endl;
	hasil = !(a == 3); // True
	hasil = !(b == 3); // False
	
	cin.get();
	return 0;
	
}
