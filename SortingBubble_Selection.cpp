#include <iostream>

using namespace std;

void tukar (int &a, int &b)
{
	int c;
	c=a;
	a=b;
	b=c;
}
void isiArray(int a[], int n)
{
	for(int i = 0; i<n;i++)
	{
		cout <<"Masukan nilai ";
		cin>> a[i];
	}
}

void cetakArray(int a[], int n)
{
	for(int i = 0; i<n;i++)
	{
		cout << a[i] <<" ";
	}
}

void BubbleSort (int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				tukar(a[j],a[j+1]);
			}
		}
	}
}

void Selection (int a[], int n)
{
	for (int i=0; i<n-1;i++)
	{
		int imin = i;
		for (int j=i+1;j<n;j++)
		{
			if (a[j] > a[imin])
			imin = j;
			{
				tukar (a[j], a[imin]);
			}
		}
	}
}

int main ()
{
	int n;
	int a[n];
	
	cout << "Masukan Index Array = ";
	cin >> n;
	
	isiArray(a, n);
	cetakArray(a, n);
	cout << "\nHasil Sorting dengan Bubble Sort ";
	cout << "\n";
	BubbleSort(a, n);
	cetakArray(a, n);
	
	cout << "\nHasil Sorting dengan Selection ";
	Selection(a, n);
	cout << "\n";
	cetakArray(a, n);
	
	
	return 0;
}

