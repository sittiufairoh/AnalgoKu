/*  Nama        : Sitti Ufairoh Azzahra
    NPM         : 140810180002
    Kelas       : B
    Deskripsi   : Program Adjacency List
*/

#include <iostream>
#include <cstdlib>
using namespace std;
 
struct AdjListNode{
    int dest;
    struct AdjListNode* next;
};
 
struct AdjList{
    struct AdjListNode *head;
};

class Graph{
    private:
        int V;
        struct AdjList* array;
    public:
        Graph(int V){
            this->V = V;
            array = new AdjList [V];
            for (int i = 0; i < V; ++i)
                array[i].head = NULL;
        }

        AdjListNode* newAdjListNode(int dest){
            AdjListNode* newNode = new AdjListNode;
            newNode->dest = dest;
            newNode->next = NULL;
            return newNode;
        }

        void addEdge(int src, int dest){
            AdjListNode* newNode = newAdjListNode(dest);
            newNode->next = array[src].head;
            array[src].head = newNode;
            newNode = newAdjListNode(src);
            newNode->next = array[dest].head;
            array[dest].head = newNode;
        }

        void printGraph(){
            int v;
            for (v = 1; v <= V; ++v){
                AdjListNode* pCrawl = array[v].head;
                cout<<"\n Adjacency list dari "<<v<<"\n head ";
                while (pCrawl)
                {
                    cout<<"-> "<<pCrawl->dest;
                    pCrawl = pCrawl->next;
                }
                cout<<endl;
            }
        }
};

int main(){
	cout << "Program Adjacency List" << endl;
	
    Graph gh(8);     
		gh.addEdge(1, 2);     
		gh.addEdge(1, 3); 
		gh.addEdge(2, 4);  
		gh.addEdge(2, 5);  
		gh.addEdge(2, 3);  
		gh.addEdge(3, 7);  
		gh.addEdge(3, 8);  
		gh.addEdge(4, 5);  
		gh.addEdge(5, 3);  
		gh.addEdge(5, 6);  
		gh.addEdge(7, 8);

    gh.printGraph();
 
    return 0;
}
