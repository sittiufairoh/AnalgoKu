/*	Nama		: Sitti Ufairoh Azzahra
	NPM			: 140810180002
	Kelas		: B
	Deskripsi	: Program Insertion Sort
*/

#include <iostream>
using namespace std;

int main(){
	int n,x[10],j;
	int insert;
	
	cout << "Masukkan Jumlah Elemen : "; cin >> n;
	for (int i = 0; i < n; i++){
		cout << "Bilangan ke - " << i+1 << " : ";
		cin >> x[i];
	}
	
	cout << "\nSebelum di Sorting : ";
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";
		cout << endl;
	
	for (int i = 1; i < n; i++){
		insert = x[i];
		j = i-1;
		while ((j >= 0) && (x[j] > insert)){
			x[j+1] = x[j];
			j--;
		}
		x[j+1] = insert;
	}

	cout << "Setelah di Sorting : ";
	for (int i = 0; i < n; i++)
		cout << x[i] << " ";

	return 0;
}
