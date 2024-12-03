#include<iostream>
#include<vector>
using namespace std;

// Using Adjacency List: 
// Undirected graph
void addEdge(vector<int> adjList[], int u, int v){
    adjList[u].push_back(v);
    adjList[v].push_back(u);

}

//Vector of array --  vector inside an array
void printGraph(vector<int> adjList[], int vertex){
    for(int i=0; i<vertex; i++){
        cout << "\n Adjacency list of vertex " << i
			<< "\n head ";
		for (auto x : adjList[i])
			cout << "-> " << x;
		printf("\n");
    }
}
int main(){
    // defining the vertex or node
    int vertex = 5;
    vector<int> adGrph1[vertex]; // Adjacency List:  list representation
    addEdge(adGrph1,0,4);
    addEdge(adGrph1,0,3);
    addEdge(adGrph1,1,2);
    addEdge(adGrph1,1,4);
    addEdge(adGrph1,2,4);
    addEdge(adGrph1,3,4);
    printGraph(adGrph1,vertex);
    return 0;

} 