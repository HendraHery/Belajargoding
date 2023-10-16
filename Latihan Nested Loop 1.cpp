#include <iostream>
using namespace std;

int main()
{
	int i,j;
	
	for (i=1;i<=9;i++)
	{
		for (j=9;j>=i;j--)
		{
			cout << j<<"\t";
		}
		cout << endl;
		
	}
	
	return 0;
}
