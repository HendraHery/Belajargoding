/* Prosedur Array 2D
oleh Fandi
tanggal 1 November 2019*/
#include <iostream>
using namespace std;

void isiArray2D (int a[3][3], int nRow, int nCol)
{
	for (int i = 0; i < nRow; i++)
	{
		for(int j = 0; j < nCol; j++)
		{
			cout << "Masukan Angka : ";
			cin >> a[i][j];
		}
	}
}
void cetakArray2D (int a[3][3], int nRow, int nCol)
{
	for (int i = 0; i < nRow; i++)
	{
		for(int j = 0; j < nCol; j++)
		{
			
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
void penjumlahanArray2D (int a[3][3], int b[3][3], int c[3][3], int nRow, int nCol)
{
	for (int i = 0; i < nRow; i++)
	{
		for(int j = 0; j < nCol; j++)
		{
			cout << "Penjumlahan Array 2 Dimensi" << endl;
			cout << a[i][j] << " + " << b[i][j] << endl;
			c[i][j] = a[i][j] + b[i][j];
		}
		cout << endl;
	}
}

int main ()
{
	
	const int nRow = 3; 
	const int nCol = 3;
	int a[nRow][nCol];
	int b[nRow][nCol];
	int c[nRow][nCol];
	
	isiArray2D (a, nRow, nCol);
	cetakArray2D (a, nRow, nCol);
	
	isiArray2D (b, nRow, nCol);
	cetakArray2D (b, nRow, nCol);
	
	penjumlahanArray2D (a, b, c, nRow, nCol );
	
	return 0;
}
