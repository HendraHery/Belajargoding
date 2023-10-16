//class dan objec manusia
//syahid 07 januari 2020

#include <iostream>
using namespace std;

class Manusia
{
    private :
    
    string nama;
    int umur;
    
    public :
    
    //getter setter
    //procedure setter
    void setNama(string nama);
    void setUmur(int umur);
    
    //fungsi getter
    string getNama();
    int getUmur();
    
    void display();
    
    //konstruktor
    Manusia(int umur);
    Manusia(string nama);
    Manusia(string nama,int umur);
};
void Manusia::setNama (string nama)
{
    this -> nama = nama;
}

void Manusia::setUmur (int umur)
{
    this -> umur = umur;
}

string Manusia::getNama()
{
    return nama;
}

int Manusia::getUmur()
{
    return umur;
}

void Manusia :: display()
{
    cout << endl;
    cout << "namanya adalah " << getNama() << endl;
    cout << "umurnya adalah" << getUmur() << endl;
}

//konstruktor

Manusia::Manusia(int umur)
{
    setUmur(umur);
}
Manusia::Manusia(string nama)
{
    setNama(nama);
}
Manusia::Manusia(string nama,int umur)
{
    setNama(nama); 
    setUmur(umur);
}


int main()
{
    Manusia pinter ("galang",20);
    
    cout << pinter.getNama();
    
    pinter.display();
    
    
    
    return 0;
}
