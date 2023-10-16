/*NOMOR 3*/
#include <iostream>
using namespace std;
int main() {
  int maksimum, jumlah, i = 1, lokasi, x;
  cout << "Masukkan jumlah elemen: ";
  cin >> jumlah;
  int array[jumlah];
  cout << "Masukkan " << jumlah << " angka\n";
  for (i = 0; i < jumlah; i ++) {
    cout << "Elemen ke-" <<(i+1) <<": ";
    cin >> array[i];
  }
  
  cout << "Cari :";
	cin >>x;
	
 bool dapet = false;
	int l = 0;
	for(int i=0;i < jumlah; i++)
	{
		if (x == array[i])
		{
			dapet = true;
			l = i;
		}
	}
	
	if (dapet == true)
	{
		cout << "ADA \n";
		cout << "Isi arraynya adalah : " << array[l] << endl;
		cout << "Elemen ke "<< l << endl;
	}
	else
	{
		cout << "TIDAK ADA";
	}
	
  maksimum = array[0];
  for(i = 0; i < jumlah; i++) {
    if (array[i] > maksimum)  {
      maksimum = array[i];
      lokasi = i+1;
    }
  }
  cout << "Nilai maksimum adalah " << maksimum << " berada di elemen ke " << lokasi << endl;
}
