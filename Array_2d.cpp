/* Array 2 Dimenasi
oleh fandi tanggal 18 Oktober 2019
*/
#include <iostream>
using namespace std;

int main(){
	int nRow, nCol;
	int a[nRow][nCol];
	cout <<"Masukan Jumlah Baris : ";
	cin >> nRow;
	
	cout <<"Masukan Jumlah Kolom : ";
	cin >> nCol;
	
	
	for (int i = 0; i < nRow ; i++)
	{
		
		for (int j = 0; j < nCol ; j++)
		{
			cout << "Masukan Angka : " ;
			cin>> a[i][j];
		
		}
	
	}
	for (int i = 0; i < nRow ; i++)
	{
		
		for (int j = 0; j < nCol ; j++)
		{
			cout << a[i][j] << " ";
		
		}
	
	}
	cout << endl;
	return 0;
}


