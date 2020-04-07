/*	Nama		: Sitti Ufairoh Azzahra
	NPM			: 140810180002
	Kelas		: B
	Deskripsi	: Program Adjacency Matrix
*/
#include <iostream>
using namespace std;

int node[20][20];

void addEdge(int u, int v){
	node[u][v] = 1;
	node[v][u] = 1;
}

void displayMatrix(int n){
	for (int i = 1; i <=n; i++)
	{
		for(int j = 1; j <= n; j++)
			cout << node[i][j] << " ";
		cout << endl;
	}
}

int main(){
	int n = 8;
	cout << "Program Adjacency Matrix" << endl;
	cout << endl;

	addEdge(1,2);
	addEdge(1,3);
	addEdge(2,4);
	addEdge(2,5);
	addEdge(2,3);
	addEdge(3,5);
	addEdge(3,7);
	addEdge(3,8);
	addEdge(4,5);
	addEdge(5,6);
	addEdge(7,8);
	displayMatrix(n);

	return 0;
}
