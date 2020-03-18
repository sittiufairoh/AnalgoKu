/*	Nama		: Sitti Ufairoh Azzahra
	NPM			: 140810180002
	Kelas		: B
	Deskripsi	: Program Bubble Sort
*/

#include <iostream>
using namespace std;

int main(){
    int arr[100],n,temp;
   
    cout<<"\nMasukkan Jumlah Data : ";cin>>n;
    for(int i=0;i<n;++i){
        cout<<"Bilangan ke-"<<i+1<<" : ";cin>>arr[i];
    }
    
    for(int i=1;i<n;i++){
        for(int j=0;j<(n-1);j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    cout<<"\nOutput Bubble Sort : ";
    for(int i=0;i<n;i++){
        cout<<" "<<arr[i];
    }
    return 0;

}
