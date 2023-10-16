#include <iostream>

using namespace std;

class Mahasiswa
{
	
	private:
		string nama;
		double NIM;
		float IPK;
	
	public:
		Mahasiswa(string, double);
		string getNama();
		void setNama(string);
		
		double getNim();
		void setNim(double);
		
		void display();
};

string Mahasiswa::getNama(){
	return nama;
}

void Mahasiswa::setNama(string inputNama){
	Mahasiswa::nama = inputNama;
}

double Mahasiswa::getNim(){
	return NIM;
}

void Mahasiswa::setNim(double inputNim){
	Mahasiswa::NIM = inputNim;
}

void Mahasiswa::display(){
	
	cout <<"\n";
	cout <<"Nama adalah " << Mahasiswa::getNama() << endl;
	cout <<"Nim adalah " << Mahasiswa::getNim() << endl;
}

Mahasiswa::Mahasiswa(string inputNama, double inputNim){
	Mahasiswa::setNama(inputNama);
	Mahasiswa::setNim(inputNim);
}


int main()
{
	Mahasiswa mahasiswa1("fandi", 10111);
	mahasiswa1.display();
	
	
	return 0;
}
