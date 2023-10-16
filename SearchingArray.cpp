//Program Pencarian Mahasiswa berdasarkan NIM dan Nama
#include <iostream>
using namespace std;

typedef struct {
    int nim;
    string nama;
    float ipk;
} mahasiswa;

void inputMahasiswa(mahasiswa m[], int n){
    //void untuk menginput data mahasiswa m satu persatu sebanyak n
    for(int i = 0; i<n; i++){
        cout<<"Masukan NIM Mahasiswa ke-"<<i+1<<": ";
        cin>>m[i].nim;
        cout<<"Masukan Nama Mahasiswa ke-"<<i+1<<": ";
        cin>>m[i].nama;
    }
}

void printMahasiswa(mahasiswa m, int i){
    //void untuk mencetak satu mahasiswa m sesuai input pada void
    cout<<"NIM Mahasiswa ke-"<<i+1<<": "<<m.nim<<endl;
    cout<<"Nama Mahasiswa ke-"<<i+1<<": "<<m.nama<<endl;
    cout<<endl;
}

void outputMahasiswa(mahasiswa m[], int n){
    //void untuk mencetak data mahasiswa m satu persatu sebanyak n
    for(int i = 0; i<n; i++){
        printMahasiswa(m[i], i);
    }
}

void searchMahasiswaNIM(mahasiswa m[], int n, int searchNIM){
    //void mencari NIM dari mahasiswa m
    //pertama membuat variabel isKetemu dan set menjadi false karena belum ditemukan apa-apa
    bool isKetemu = false;
    //membuat variabel yang akan diisi oleh posisi mahasiswa yang ditemukan
    int result_position;
    int i = 0;
	while (isKetemu == false){
        if(m[i].nim==searchNIM){
            //jika ketemu maka mengubah bool isKetemu menjadi true
            isKetemu = true;
            result_position = i;
        }
        i++;
    }
    if (isKetemu==true){
        cout<<"Ketemu"<<endl;
        //setelah ketemu dicetak dengan void dibawah
        printMahasiswa(m[result_position], result_position);
    } else {
        cout<<"Tidak ketemu"<<endl;
    }
}

void searchMahasiswaNama(mahasiswa m[], int n, string searchNama){
    //void mencari NIM dari mahasiswa m
    //pertama membuat variabel isKetemu dan set menjadi false karena belum ditemukan apa-apa
    bool isKetemu = false;
    //membuat variabel yang akan diisi oleh posisi mahasiswa yang ditemukan
    int result_position;
    
	for (int i=0; i<n; i++){
        if(m[i].nama==searchNama){
            //jika ketemu maka mengubah bool isKetemu menjadi true
            isKetemu = true;
            result_position = i;
        }
    }
    if (isKetemu==true){
        cout<<"Ketemu"<<endl;
        //setelah ketemu dicetak dengan void dibawah
        printMahasiswa(m[result_position], result_position);
    } else {
        cout<<"Tidak ketemu"<<endl;
    }
}
void tukarNim (int &a, int &b)
{
	int c;
	
	c=a;
	a=b;
	b=c;
}

void tukarNama (string &a, string &b)
{
	string c;
	
	c=a;
	a=b;
	b=c;
}
void SortMhsNIM (mahasiswa m[], int n)
{
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(m[j].nim > m[j+1].nim)
			{
				tukarNim ( m[j].nim, m[j+1].nim);
				tukarNama( m[j].nama, m[j+1].nama);
			}
		}
	}

}

int main()
{
  //deklarasi
  int n=100;
  mahasiswa m[n];
  int searchNIM;
  string searchNama;
  ///proses
  //penentuan jumlah mahasiswa
  cout<<"Masukan Jumlah Mahasiswa: ";
  cin>>n;
  //input data mahasiswa
  inputMahasiswa(m, n);
  cout<<"======================================="<<endl;
  //output data mahasiswa
  outputMahasiswa(m, n);
  cout<<"======================================="<<endl;
  //pencarian mahasiswa berdasarkan NIM
  cout<<"Masukan NIM yang ingin dicari: ";
  cin>>searchNIM;
  cout<<"======================================="<<endl;
  searchMahasiswaNIM(m, n, searchNIM);
  cout<<"Masukan Nama yang ingin dicari: ";
  cin>>searchNama;
  cout<<"======================================="<<endl;
  searchMahasiswaNama(m, n, searchNama);
  cout<<"======================================="<<endl;
  cout <<"Sorting Mahasiswa NIM" << endl;
  SortMhsNIM (m, n);
  outputMahasiswa(m, n);
  return 0;
}

