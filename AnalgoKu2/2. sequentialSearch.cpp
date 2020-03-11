/*	Nama		: Sitti Ufairoh Azzahra
	NPM			: 140810180002
	Kelas		: B
	Deskripsi	: Program Sequential Search
*/

#include <iostream>
using namespace std;

int main() {
  int n,y,x[10],idx;
  int i = 0;
  bool found = false;
  
	cout << "Masukkan Jumlah Elemen : "; cin >> n;
  		for (int i = 0; i < n; i++){
    		cout << "Bilangan ke - " << i+1 << " : ";cin >> x[i];
  		}
	
  	cout << "\nMasukkan yang dicari : ";cin >> y;
  
  	while ((i < n) && (!found)){
    	if (x[i] == y)
      		found = true;
    	else
      		i++;
  	}
  
  	if (found)
    	idx = i+1;
  	else
    	idx = 0;

  	cout << "\nYang dicari berada di urutan : " << idx << endl; 

  	return 0;
}
