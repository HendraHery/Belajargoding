#include <iostream>
using namespace std;

int main()
{
	int nilai;
	cout<<"Masukan Nilai anda : ";
	cin >>nilai;
	if (nilai > 80 && nilai < 100 )
	{
		cout << "Nilai A";
	}
	else if (nilai < 50 )
	{
		cout << "Nilai C";
		
	}
	else if (nilai >50 && nilai <80)
	{
		cout << "Nilai B";
	}
	else if (nilai > 100)
	{
		cout << "Nilai anda kelebihan";
	}
	return 0;
}
