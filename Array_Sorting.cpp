/*Pengurutan Array (Sorting) 
Pengurutan Kecil -> Besar = Ascending
Pengurutan Besar -> Kecil = Descending
Oleh Fandi
Tanggal 06 November 2019 */

#include <iostream>
using namespace std;

/*Sorting ada 3 macam 
	Bubble, Selection, Inserting.*/
void tukar (int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
}

void cetakArray (int a[], int n)
{
	for (int i = 0; i < n ; i ++)
	{
		cout << "Index [" << i <<  "]" << " = " << a[i] << endl;
	}
	cout << endl;
}

void bubbleSort (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (a[i] > a[j])
			{
				tukar(a[i], a[j]);
			}
		}
	}
	
 } 

void isiNilai (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout <<"Masukan anggota ke "<< i << ": ";
		cin>>a[i];
		
	}
}

int main ()
{	
	int n;
	cout << "Masukan Angka :";
	cin >> n;
	int a[n];
	isiNilai (a, n);
	
	cout <<"Sebelum Ditukar \n";
	cetakArray (a, n);
	bubbleSort (a, n);
	cout <<"Sesudah Ditukar \n";
	cetakArray (a, n);
	return 0;
}
