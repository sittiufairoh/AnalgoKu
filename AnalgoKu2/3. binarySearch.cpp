/*	Nama		: Sitti Ufairoh Azzahra
	NPM			: 140810180002
	Kelas		: B
	Deskripsi	: Program Binary Search
*/
#include <iostream>
using namespace std;

int main(){
	int i,j,mid,n,x[100],y,idx;
	bool found=false;
	
	cout<<"Masukkan Jumlah Elemen  : ";cin>>n;
	for (int i=0; i<n;){
		cout<<"Bilangan ke - "<<++i<<" : ";cin>>x[i];
	}
	i=1;j=n;
	cout<<"\nMasukkan yang dicari : ";cin>>y;
	do{
		mid=(i+j)/2;
		if (x[mid]==y)
			found=true;
		else if (x[mid]<y)
			i=mid+1;
		else
			j=mid-1;
	}while(found==false&&i<=j);
	
	if (found==true)
		idx=mid;
	else
		idx=0;
	
	cout<<"\nBilangan berada di index ke - "<<idx;	
}
