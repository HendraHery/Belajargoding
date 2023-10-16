#include <iostream>
using namespace std;

int main ()
{
	for (int i=0 ; i<4 ; i++)
	{
		for (int j = 0;j <=4 ;j++)
		{
			//Jika Ganjil, Cetak A
			if(j % 2 != 0){
				cout << "A";
			}// Jika Genap, Cetak B
			if(j % 2 == 0){
				cout << "B";
			}
		}
			cout << endl;
	}	
	return 0;
}
