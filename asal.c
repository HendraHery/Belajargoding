/* Object Oriented Programming Inheritence*/
#include <iostream>
using namespace std;

class Orang
{
	protected: 
		string nama;
	
	public:
		Orang();
		Orang(string);
		
		string getNama();
		void setNama(string);
		
		void display();
};

Orang::Orang()
{
	
	
}

Orang::Orang(string nama)
{
	setNama(nama);
	
}

string Orang::getNama()
{
	return nama;
}

void Orang::setNama(string n)
{
	nama = n;
}

void Orang::display()
{
	cout << getNama() << endl;
}

class Mahasiswa:Orang // Nama class
{
	private: // Deklarasi tipe data dengan private(hanya bisa diakses dalam class yang sama)
		int nim;
//		string nama;
		float ipk;
	
	public: // Proses untuk memanggil prosedur dan fungsi
		
		int getNim();
		void setNim(int);
		
//		string getNama();
//		void setNama(string);
		
		float getIpk();
		void setIpk(float);
		
		//Constructor
		
		Mahasiswa();
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
// ===================================

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
	Orang::display();
//	cout << getNama() << endl;
	cout << getIpk() << endl;
}

// ====================================

// Constructor 

Mahasiswa::Mahasiswa(int nim, string nama, float ipk):Orang(nama)
{
	setNim(nim);
	setIpk(ipk);
	
}


int main ()
{
	
	Mahasiswa m(100,"Fandi", 3.5);
	
	
//	m.setNim(100);
//	m.setNama("fandi");
//	m.setIpk(3.8);
	m.display();
	
	return 0;
}


