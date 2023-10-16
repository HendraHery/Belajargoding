#include <iostream>
using  namespace std;

void tukar (int &a, int &b);
void bubbleSortASC (int a[], int n);
void bubbleSortDESC (int a[], int n);
void bubbleSortKananASC (int a[], int n);
void bubbleSortKananDESC (int a[], int n);
void selectionSortASC (int a[], int n);
void selectionSortDESC (int a[], int n);
void isiArray (int a[], int n);
void cetakArray (int a[], int n);

int main()
{
	int n;
	int a[n];
	
	cout<<"Masukkan jumlah array = ";
	cin>>n;
	
	isiArray(a,n);
	cout<<"Masukan Index Array :";
	cetakArray(a,n);
	cout<<"\nHasil Sorting Bubblesort Ascending = ";
	bubbleSortASC(a,n);
	cetakArray(a,n);
	cout<<"\nHasil Sorting Bubblesort Descending = ";
	bubbleSortDESC(a,n);
	cetakArray(a,n);
	cout<<"\nHasil Sorting Bubblesort Kanan Ascending = ";
	bubbleSortKananASC(a,n);
	cetakArray(a,n);
	cout<<"\nHasil Sorting Bubblesort Kanan Descending = ";
	bubbleSortKananDESC(a,n);
	cetakArray(a,n);
	cout<<"\nHasil Sorting Selection Sort Ascending = ";
	selectionSortASC(a,n);
	cetakArray(a,n);
	cout<<"\nhasil sorting Selection Sort Descending = ";
	selectionSortDESC(a,n);
	cetakArray(a,n);
	
	return 0;
}

void isiArray (int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"Masukkan angka = ";
		cin>>a[i];
	}
}

void cetakArray (int a[], int n)
{
	for(int i=0;i<n;i++)
	{
		cout<< a[i] << " ";
	}
	
}

void bubbleSortASC(int a[], int n)
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

void bubbleSortDESC(int a[], int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]<a[j+1])
			{
				tukar (a[j],a[j+1]);
			}
		}
	}
}

void bubbleSortKananASC (int a[], int n)
{	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if (a[j+1]>a[j])
			{
				tukar(a[j],a[j+1]);
			}
		}
	}
}

void bubbleSortKananDESC (int a[], int n)
{
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1;j++)
		
		{
			if (a[j+1]<a[j])
			{
				tukar(a[j],a[j+1]);
			}
		}
	}
}

void selectionSortASC(int a[], int n)
{
	int i,j,imin;
	for(i=0;i<n-1;i++)
	{
		imin = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[imin])
			imin=j;
			{
				tukar(a[j],a[imin]);
			}
		}
	}
}

void selectionSortDESC(int a[], int n)
{
	int i,j,imin =0 ;
	for(i=0;i<n-1;i++)
	{
		imin = i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[imin])
			imin=j;
			{
				tukar(a[j],a[imin]);
			}
		}
	}
}

void tukar (int &a, int &b)
{
	int c;
	
	c=a;
	a=b;
	b=c;
}
