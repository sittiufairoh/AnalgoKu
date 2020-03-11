/*	Nama		: Sitti Ufairoh Azzahra
	NPM			: 140810180002
	Kelas		: B
	Deskripsi	: Program Pencarian Nilai Maksimal
*/

#include <iostream>
using namespace std;

int main(){
	int x[99];
	int n,maks,i;
	
	cout<<"Masukkan jumlah elemen : ";cin>>n;
	for(int i=0;i<n;){
		cout<<"Bilangan ke - "<<++i<<" : ";cin>>x[i];
	}
	
	maks = x[1];
	
	i = 2;
	
	do{
		if(x[i]>maks){
			maks = x[i];
		}
		i = i+1;
	}while(i<=n);
	cout<<"\noutput = " <<maks<<endl;
}

