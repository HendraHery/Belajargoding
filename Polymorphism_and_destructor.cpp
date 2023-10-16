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
		virtual ~Orang() = default;
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
class Dosen: public Orang
{
	private:
		string nama;
	
	public:
		void setNama(string n);
		string getNama();
		Dosen();
};
Dosen::Dosen(){
	
}
string Dosen::getNama(){
	return nama;
}
void Dosen::setNama(string n){
	nama = n;
}
class Mahasiswa: public Orang // Nama class
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
		~Mahasiswa();
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

Mahasiswa::Mahasiswa() {
	
}
// destructor
Mahasiswa::~Mahasiswa() {
	cout << "mahasiswa "<< nama<<" dihapus" <<endl;
}

// Kalo pake polimorfisme
void greet(Orang *o) {
	cout << "Halo " << o->getNama() << " Selamat pagi, udah makan belum" << endl;
}

// Kalo gak pake
void greetMahasiswa(Mahasiswa *o) {
	cout << "Halo " << o->getNama() << " Selamat pagi, udah makan belum" << endl;
}
void greetDosen(Dosen *o) {
	cout << "Halo " << o->getNama() << " Selamat pagi, udah makan belum" << endl;
}

int main ()
{
	if(true) {
		Mahasiswa x(1,"x", 1);
		
	}
	
	
//	cout<<x.getNama()<<endl;
	
	Orang *o[6];
	
	o[0] = new Mahasiswa(123, "Fandi", 4);
	o[1] = new Mahasiswa(333, "Royyan", 4);
	o[2] = new Mahasiswa(444, "Syahid", 4);

	o[3] = new Dosen;
	o[4] = new Dosen;
	o[5] = new Dosen;

	o[3]->setNama("Nasrul");
	o[4]->setNama("Hakiem");
	o[5]->setNama("Phd");

	for(int i = 0; i < 6; i++) {
		cout << o[i]->getNama() << endl;
	}	
	Mahasiswa ganteng(19, "Herbert", 4);
	
	// Kalo pake polimorfisme
	greet(&ganteng);
	greet(o[0]);
	greet(o[3]);
	
	// Kalo pake polimorfisme
	
	Mahasiswa m1(19, "Qwer", 4);
	Mahasiswa m2(119, "AAA", 4);
	Dosen d1;
	d1.setNama("x");
	greetMahasiswa(&m1);
	greetMahasiswa(&m2);
	greetDosen(&d1);
	
//	greetMahasiswa(&m1);
//	greetMahasiswa(&m2);
//	greetMahasiswa(&d1); ERROR
	
// PUSING tapi coab aja pelajarin
// Tambahin virutal di destructor
	Mahasiswa *m = dynamic_cast<Mahasiswa*>(o[0]);

	cout <<  m->getNama() << endl;
	
	
	return 0;
}
