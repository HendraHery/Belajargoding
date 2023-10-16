#include<iostream>

using namespace std;

int main()
{
	int nilai, terbesar = -999999999;
	const int jumlahAngka = 5;
	
	for(int i = 0; i < jumlahAngka; i++) 
	{
		cout << "masukan angka : ";
		cin >> nilai;
		
		if(nilai > terbesar)
		{
				terbesar = nilai;		
		}
	}
	
	cout << "nilai terbesar : " << terbesar;
	
	return 0;
}
