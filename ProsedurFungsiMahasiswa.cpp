#include <iostream>
using namespace std;

typedef struct
{
	int nim;
	string nama;
	float ipk;
}
mahasiswa;

void isiArrayMahasiswa(mahasiswa m[], int n);
void cetakArrayMahasiswa(mahasiswa m[], int n);
void cetakMahasiswa(mahasiswa m);
int indexTertinggi(mahasiswa m[], int n);

int main()
{
	int n=2;
	mahasiswa m[n];
	int max;
	
	isiArrayMahasiswa(m,n);
	cetakArrayMahasiswa(m,n);
	
	cout <<"==============="<<endl;
	
	max = indexTertinggi(m,n);
	cout <<"==============="<<endl;
	cetakMahasiswa(m[max]);
	
	return 0;
}

void isiArrayMahasiswa(mahasiswa m[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"masukan nim = ";
		cin>>m[i].nim;
		cout<<"masukan nama = ";
		cin>>m[i].nama;
		cout<<"masukan ipk = ";
		cin>>m[i].ipk;
	}
}
void cetakMahasiswa(mahasiswa m)
{
	cout<<"\nnim = "<<m.nim<<endl;
	cout<<"nama = "<<m.nama<<endl;
	cout<<"ipk = "<<m.ipk<<endl;
}
void cetakArrayMahasiswa(mahasiswa m[], int n)
{
	for (int i=0;i<n;i++)
	{
		cetakMahasiswa(m[i]);
	}
}

int indexTertinggi(mahasiswa m[], int n)
{
	int indexIPKMax=0;
	for (int i=0; i<n;i++) {
		if (m[i].ipk > m[indexIPKMax].ipk) {
			indexIPKMax = i;
			
		}
	}
	
	return indexIPKMax;
}
