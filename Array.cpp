/*NOMOR 2
*/
#include <iostream>
using namespace std;

int main(){
	
	int n = 11 ;
	int x;
	int a[n];
		for (int i = 0; i < n; i++){
		cout <<"Masukan anggota ke "<< i << ": ";
		cin>>a[i];
		
	}
	
	for (int i = 0; i < n; i++){
		
		cout <<" "<<a[i] << endl;
		
	}
	cout << "Cari :";
	cin >>x;
		
	bool dapet = false;
	int l = 0;
	for(int i=0;i <n; i++)
	{
		if (x == a[i])
		{
			dapet = true;
			l = i;
		}
	}

	if (dapet == true)
	{
		cout << "ADA \n";
		cout << "Index ke "<< l << endl;
	}
	else
	{
		cout << "TIDAK ADA";
	}
	
	return 0;
}


