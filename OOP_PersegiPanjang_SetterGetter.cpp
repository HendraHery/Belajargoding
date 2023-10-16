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

int main ()
{
	PersegiPanjang p (3 , 5);
	p.display();
	
	
	cin.get();
	return 0;
}
