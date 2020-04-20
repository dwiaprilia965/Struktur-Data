#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int i;
	int n;
	int cari,ketemu=0;
	int A[100];
	
	cout<<"program searching linier";
	cout<<endl;
	cout<<"masukkan data : ";
	cin>>n;
	cout<<endl;
	for (i=1;i<=n;i++)
	{
		cout<<"data ke-"<<i<<":";
		cin>>A[i];
	}
	cout<<endl;
	cout<<"input bilangan yang dicri : ";
	cin>>cari;
	
	for (i=0;i<=n;i++)
	{
		if (A[i]==cari)
	{
		ketemu=1;
		cout<<"Data ditemukan, Index ke- "<<i;
	}
}

	if (ketemu==0)
	{
		cout<<"data tidak ditemukan "<<endl;
	}
	getch();
	}


