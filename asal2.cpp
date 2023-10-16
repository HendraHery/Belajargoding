/* Object Oriented Programming */
#include <iostream>
using namespace std;

class RekeningBank // Nama class
{
	private: // Deklarasi tipe data dengan private(hanya bisa diakses dalam class yang sama)
		int noRek;
		string nama;
		int saldo;
	
	public: // Proses untuk memanggil prosedur dan fungsi
		
		int getnoRek();
		void setnoRek(int);
		
		string getNama();
		void setNama(string);
		
		int getsaldo();
		void setsaldo(int);
		
		//Constructor
		
		RekeningBank();
		
		RekeningBank(int, string, int);
		
		//Prosedur untuk menampilkan
		void display();
};

// =======================================

int RekeningBank::getnoRek()
{
	return noRek;
}

void RekeningBank::setnoRek(int n)
{
	noRek = n;
}

// ========================================

string RekeningBank::getNama()
{
	return nama;
}

void RekeningBank::setNama(string n)
{
	nama = n;
}

// =======================================

int RekeningBank::getsaldo()
{
	return saldo;
}

void RekeningBank::setsaldo(int n)
{
	saldo = n;
}

// =====================================

void RekeningBank::display() // Prosedur untuk menampilkan 
{
	cout << getnoRek() << endl;
	cout << getNama() << endl;
	cout << getsaldo() << endl;
}

// ====================================

// Constructor 

RekeningBank::RekeningBank()
{
	
}

RekeningBank::RekeningBank(int noRek, string nama, int saldo)
{
	setnoRek(noRek);
	setNama(nama);
	setsaldo(saldo);
	
}


int main ()
{
	
	RekeningBank m(125,"ali", 3);
	
	
//	m.setRekeningBank(100);
//	m.setNama("fandi");
//	m.setsaldo(3.8);
	m.display();
	
	return 0;
}


