/*	Nama		: Sitti Ufairoh Azzahra
	NPM			: 140810180002
	Kelas		: B
	Deskripsi	: Program Selection Sort
*/

#include <iostream>
using namespace std;

int main(){
	int n,x[10],imaks,temp;
	
	cout << "Masukkan Jumlah Elemen : ";cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Bilangan ke - " << i+1 << " : ";
		cin >> x[i];
	}
	
	cout << "\nSebelum di Sorting : ";
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";
		cout << endl;

	for (int i = n-1; i >= 1; i--){
		imaks = 0;
		for (int j = 1; j <= i; j++){
			if (x[j] > x[imaks])
				imaks = j;
		}
		temp = x[i];
		x[i] = x[imaks];
		x[imaks] = temp;
	}

	cout << "Setelah di Sorting : ";
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";

	return 0;
}
