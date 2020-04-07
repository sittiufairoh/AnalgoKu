/*	Nama		: Sitti Ufairoh Azzahra
	NPM			: 140810180002
	Kelas		: B
	Deskripsi	: Program  Breadth First Search
*/
#include <iostream>
#include <list>
using namespace std;

class Graph{
	int N; 
	list<int> *adj;
	
	public :
		Graph(int N){
			this->N == N;
			adj = new list<int>[N];
		}
		void addEdge(int u, int v){
			adj[u].push_back(v);
		}
		void BFS(int s){
			bool *visited = new bool[N];
			for(int i = 0; i < N; i++)
				visited[i] = false;
	
			list<int> queue;
			visited[s] = true;
			queue.push_back(s);
			list<int>::iterator i;
	
			while(!queue.empty()){
				s = queue.front();
				cout << s << " ";
				queue.pop_front();
	
				for(i = adj[s].begin(); i != adj[s].end(); i++){
					if(!visited[*i]){
						visited[*i] = true;
						queue.push_back(*i);
					}
				}
			}
		}
};

int main(){
	cout << "Program Breadth First Search " << endl;
	
	Graph g(8);
	g.addEdge(1,2);
	g.addEdge(1,3);
	g.addEdge(2,3);
	g.addEdge(2,4);
	g.addEdge(2,5);
	g.addEdge(3,7);
	g.addEdge(3,8);
	g.addEdge(4,5);
	g.addEdge(5,3);
	g.addEdge(5,6);
	g.addEdge(7,8);

	cout << "\nBFS Mulai dari 1" << endl;
	g.BFS(1);

	return 0;
}
