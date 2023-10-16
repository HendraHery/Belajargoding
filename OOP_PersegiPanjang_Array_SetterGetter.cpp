// OOP PERSEGI PANJANG
// 20 DESEMBER 2019
#include <iostream>
using namespace std;

class PersegiPanjang
{
	
	private:
		int panjang;
		int lebar;
	
	public:
		PersegiPanjang();
		PersegiPanjang(int, int);
		
		int getPanjang();
		void setPanjang(int);
		
		int getLebar();
		void setLebar(int);
		
		int getLuas();
		
		void display();
};

// ============================================= Setter Getter Panjang
int PersegiPanjang::getPanjang()
{
	return panjang;
}

void PersegiPanjang::setPanjang(int n)
{
	panjang = n;
}

// ============================================= Setter Getter Lebar

int PersegiPanjang::getLebar()
{
	return lebar;
}

void PersegiPanjang::setLebar(int n)
{
	lebar = n;
}
// ============================================= LUAS

int PersegiPanjang::getLuas()
{
	return panjang * lebar;
}

// ============================================= CONSTRUCTOR

PersegiPanjang::PersegiPanjang()
{
	
}

PersegiPanjang::PersegiPanjang(int panjang, int lebar)
{
	setPanjang(panjang);
	setLebar(lebar);
	
}

// ============================================= DISPLAY

void PersegiPanjang::display()
{
	
	cout << "Panjang = " << getPanjang() << endl;
	cout << "Lebar = " <<  getLebar() << endl;
	cout << "Luas = " <<  getLuas() << endl;
}
// =========================================================================

void isiArrayPersegiPanjang(PersegiPanjang pp[], int n)
{
	int p,l;
	for (int i = 0; i < n; i++)
	{
		cout << "Masukan Panjang : ";
		cin >> p;
		cout << "Masukan Lebar : ";
		cin >> l;
		pp[i].setPanjang(p);
		pp[i].setLebar(l);
		
	}
}

void cetakArrayPersegiPanjang(PersegiPanjang pp[], int n)
{
	for(int i = 0; i < n; i++)
	{
		pp[i].display();	
	}
	cout << endl;	
}

int PPMaxLuas (PersegiPanjang[], int n)
{
	int iMax = 0;
	for (int i = 0; i < n; i++)
	{
		if (pp[i].getLuas() > iMax)
		{
			iMax = i;
		}
	}
}
int main ()
{
	int i;
	PersegiPanjang p (3 , 5);
	p.display();
	
	PersegiPanjang pp[3];
	isiArrayPersegiPanjang(pp, 3);
	cetakArrayPersegiPanjang(pp, 3);
	
	i = PPMaxLuas (pp, 3);
	pp[i].display();
	
	cin.get();
	return 0;
}
