#include <iostream>
using namespace std;

int main ()

{
	int a = 5;
	int b;
	
	b = ++a;
	cout << "b = " << b<<endl;
	cout << "a = " << a<<endl;
	
	b = a++;
	cout << "b = " <<b<<endl;
	cout << "a = " <<a<<endl;
	return 0;
}
