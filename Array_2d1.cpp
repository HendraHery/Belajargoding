#include <iostream>
using namespace std;

int main ()
{
	int cariNilai, nRow, nCol, x, nilai, index_i, index_j;
	bool ketemu;
	cout << "Masukan Baris : ";
	cin >> nRow;
	cout << "Masukan Kolom : ";
	cin >> nCol;
	int a[nRow][nCol];
	for (int i = 0; i < nRow; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			cout << "Masukan angka : ";
			cin >> a[i][j];
		}
	}
	cout << "\n \n";
	for (int i = 0; i < nRow; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "Masukan nilai yang akan dicari : ";
	cin >> nilai;
	for (int i = 0; i < nRow; i++)
	{
		for (int j = 0; j < nCol; j++)
		{
			if (nilai == a[i][j])
			{
				cariNilai = nilai;
				index_i = i;
				index_j = j;
			}
		}
	}
	if (nilai == cariNilai)
	{
		cout <<"Nilai yang dicari "<< nilai << " ditemukan di index ke [" << index_i << " " << index_j << "]" << endl;
	}
	else
	{
		cout << "-99" <<endl;
	}
	return 0;
}

