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
		
		
		void nabung(int );
		void tarik(int);
		void transfer(RekeningBank r, int);
		
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
void RekeningBank::nabung(int n)
{
	
	saldo = saldo + n;
}

void RekeningBank::tarik(int n)
{
	
	if(n > saldo)
	{
		cout << "Saldo tidak cukup" << endl;
	}else 
	{
		saldo = saldo - n;
	}
}

void RekeningBank::transfer(RekeningBank r, int n)
{
	
	if(n > saldo)
	{
		cout << "Saldo tidak cukup" << endl;
	}else 
	{
		RekeningBank::tarik(n);
		r.nabung(n);
	}
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
	
	RekeningBank r(111,"ali", 1000), s(333,"abi", 0);
	r.display();
	s.display();
	cout << "======================="<< endl;
	r.tarik(200);
	
	r.display();
	cout << "======================="<< endl;
	r.transfer(s, 500);
//	r.display();
	cout << "======================="<< endl;
	
	s.nabung(500);
	s.display();
	return 0;
}


