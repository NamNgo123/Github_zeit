//Viet ham sap xep mang theo thu tu giam dan.


#include<iostream>
#include<time.h>
#define MAX 100
using namespace std;

void NhapMang(int a[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Phan tu thu "<< i <<": ";
		cin>> a[i];
	}

}

void MangNgauNhien(int a[], int n)
{
	srand((unsigned)time(NULL));
		for(int i=0; i<n; i++)
			a[i]=rand()%100 - rand()%100;

}

void XuatMang(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<<a[i]<<"\t";
}

void HoanVi(int &x, int &y)
{
	int q=x;
	x=y;
	y=q;
}

void SapXepAmGiamDan(int a[], int n)
{
	int i, j;
	cout<<"\nMang giam dan la: \n";
	for(i=0; i<n-1; i++) 
		for(j=i+1; j<n; j++) 
			if(a[j]>a[i]) 
				HoanVi(a[i], a[j]);	
	
}

int main()
{
	int a[MAX], n;
	cout<<"Nhap so luong thuc cua mang: "; cin>>n;

	//NhapMang(a,n);
	MangNgauNhien(a,n);
	XuatMang(a,n);

	SapXepAmGiamDan(a,n);
	XuatMang(a,n);

	cout<<endl;
}
//add somethings else
