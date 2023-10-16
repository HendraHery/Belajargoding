/* Object Oriented Programming */
#include <iostream>
using namespace std;

class Mahasiswa // Nama class
{
	private: // Deklarasi tipe data dengan private(hanya bisa diakses dalam class yang sama)
		int nim;
		string nama;
		float ipk;
	
	public: // Proses untuk memanggil prosedur dan fungsi
		
		int getNim();
		void setNim(int);
		
		string getNama();
		void setNama(string);
		
		float getIpk();
		void setIpk(float);
		
		//Constructor
		
		Mahasiswa();
		Mahasiswa(int, string);
		Mahasiswa(int, string, float);
		
		//Prosedur untuk menampilkan
		void display();
};

// =======================================

int Mahasiswa::getNim()
{
	return nim;
}

void Mahasiswa::setNim(int n)
{
	nim = n;
}

// ========================================

string Mahasiswa::getNama()
{
	return nama;
}

void Mahasiswa::setNama(string n)
{
	nama = n;
}

// =======================================

float Mahasiswa::getIpk()
{
	return ipk;
}

void Mahasiswa::setIpk(float n)
{
	ipk = n;
}

// =====================================

void Mahasiswa::display() // Prosedur untuk menampilkan 
{
	cout << getNim() << endl;
	cout << getNama() << endl;
	cout << getIpk() << endl;
}

// ====================================

// Constructor 

Mahasiswa::Mahasiswa()
{
	
}

Mahasiswa::Mahasiswa(int nim, string nama)
{
	setNim(nim);
	setNama(nama);
}
Mahasiswa::Mahasiswa(int nim, string nama, float ipk)
{
	setNim(nim);
	setNama(nama);
	setIpk(ipk);
	
}


int main ()
{
	
	Mahasiswa m(125,"ali", 3.7);
	
	
//	m.setNim(100);
//	m.setNama("fandi");
//	m.setIpk(3.8);
	m.display();
	
	return 0;
}


