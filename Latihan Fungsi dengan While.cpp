#include <iostream>
using namespace std;

int jumlahBilangan (int n)
{
	int i = 0;
	while (i<n){
		cout << i << endl;
		i++;
	}
}
int main()
{
	int n;
	do
	{
		cout <<"Masukan Angka (lebih dari 1): ";
		cin >>n;
		
	}
	while (n < 1);
	
	cout << jumlahBilangan(n);
	
	cin.get();
	return 0;
}

