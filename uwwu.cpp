/*
program : Menghitung gaji Karyawan
by : unknown, anonymous

mrnghitukng gaji karyawan /minggu jam kerja 
standar a/ 50 jm jika lebih dari 50 jam dianggap lembur

upah gaji perhari = 50k
upah lembur /jam = 25% * upah /hari
upah lembur = jamlembur *upah lembur/jam

total gaji perminggu = jumlah jam standar * upah standar / jam + upah lembur

nama , jamkerja, waktu lembur, upah


*/

#include<iostream>
using namespace std;

class Karyawan
{
	private :
		string nama;
		int jamKerja;
		int waktuKerja;
		int waktuLembur;
		float upah;
	
	public :
		void setNama(string nama)
		{
			this->nama = nama;
		}
		void setJamKerja(int jamKerja)
		{
			this->jamKerja = jamKerja;
		}
		void setWaktuLembur(int waktuLembur)
		{
			this->waktuLembur = waktuLembur;
		}
		void setUpah(float upah)
		{
			this->upah = upah;
		}
		void setWaktuKerja(int waktuKerja)
		{
			this->waktuKerja = waktuKerja;
		}
		
		void tampilan()
		{
			cout << "namanya " << getNama() <<endl; 
			cout << "kerjanya selama : " << getWaktuKerja() << " jam"<<endl;
			cout << "Waktu Lembur : " << getWaktuLembur() << " jam"<<endl;
			cout << "upah si " << getNama() << " perminggu adalah : Rp." << getUpah()  <<endl;
		}
		
		
		
		string getNama()
		{
			return nama;
		}
		int getJamKerja()
		{
			return jamKerja;
		}
		int getWaktuLembur()
		{
			return waktuLembur;
		}
		float getUpah()
		{
			return upah;
		}
		int getWaktuKerja()
		{
			return waktuKerja;
		}
		
		//konstruktor
		
		Karyawan(){};
		Karyawan(string nama, int jamKerja)
		{
			Karyawan::setNama(nama);
			Karyawan::setJamKerja(jamKerja);
		}
		
		
		
		
	
};


float hitungUpah(float a, float b);
void masukanKaryawan(int n);
void tampilkanKaryawan(Karyawan nama[],int n);

int main()
{
	int n;
	cout << "Masukan Jumlah Karyawan yang ingin anda input : ";
	cin >> n; 
	cout << "\n";
	
	masukanKaryawan(n);
	
	
	
	
	return 0;
}

void masukanKaryawan(int n)
{
	Karyawan nama[n];
	
	for(int i = 0; i<n; i++)
	{
		//input nama
		
		string x1,dump;
		int x2,x3,x4,u1,u2,u3,dump2;
		float upah;
		
		
		
		
		
		cout << "Masukan Nama Karyawan ke " << i << " : ";
		cin >>  x1;
		nama[i].setNama(x1);
		dump = nama[i].getNama();
		if( x1 == dump)
		{
			cout << "      -=Data disimpan=- \n";
		}
		
		//input jam kerja
		
		do
		{
			
			
			 cout << "Masukan Jam Kerja : ";
			 cin >> x2;	
			 
			 
			 
			 if(x2 > 100)
			 {
			 	cout << "Jam Kerja Maksimal 100 Jam " << endl;
			 	cout << "Bikin Candi lu ?" << endl;
			 	cout << "gblk" << endl;
			 }
			 else if (x2 == 100)
			 {
			 	cout << "Jam Kerja Maksimal 100 Jam " << endl;
			 	cout << "Mabok Lu tong, Kerja Rodi ??" << endl;
			 	cout << "gblk" << endl;
			 }
			 else if (x2 == 0)
			 {
			 	cout << "Gk usah kerja lu njenggg" << endl;
			 	cout << "gblk" << endl;
			 }
			 else if (x2 <= 0)
			 {
			 	cout << "mau kerja apa ngutang ?" << endl;
			 	cout << "gblk" << endl;
			 }
			 
			 
		}while (x2 >= 100 || x2 <=0 );
		
		nama[i].setJamKerja(x2);
		
		
		dump2 = nama[i].getJamKerja();
		if( x2 == dump2)
		{
			cout << "      -=Data disimpan=- \n\n";
		}
		
	
		if(x2 >= 50)
		{
			x3 = x2 - 50;
			x4 = 50;	
		}
		else if (x2 <= 50)
		{
			x4 = x2;
			x3 = 0;
		}
	
		nama[i].setWaktuKerja(x4);
		nama[i].setWaktuLembur(x3);
		
		
		
			
		u1 = nama[i].getWaktuKerja(); //50
		u2 = nama[i].getWaktuLembur(); //10
			
		u3 = hitungUpah( u1,u2);
		
		nama[i].setUpah(u3);
		
		
		
			
			
			
		
		
	}
	
	tampilkanKaryawan(nama,n);
	
}

void tampilkanKaryawan(Karyawan nama[],int n)
{
	for(int i=0;i<n;i++)
	{
		
		
		cout << "\nData Karyawan ke " << i << " : \n";
		nama[i].tampilan();
	}
	
	
}

// a = waktu kerja b = waktu lembur
float hitungUpah(float a, float b)
{
	// Andaikan waktu jam kerja standar perhari = 10 jam. dan hari kerja perminggu = 5hari
	// artinya..... jam kerja yang di dapat maksimal perminggu dengan upah standar 10jam*5hari
	// adalah 50 jam.
	
	//gaji perhari adalah 50k
	//50k dibagi 10jam = 5k.
	//maka gaji perjamnya adalah 5000. 
	
	//gaji lembur perjam = 25% dari 50k = 12500 perjam
	
	int wkt = a*5000 + b*12500;
	
	return wkt;
	
}


