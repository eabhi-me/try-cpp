#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void addEdge(vector<int> adjList[], int u, int v){
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}
void printGraph(vector<int> adjList[], int vertex){
    for(int i=0; i<vertex; i++){
        cout << "\n Adjacency list of vertex " << i
			<< "\n head ";
		for (auto x : adjList[i])
			cout << "-> " << x;
		printf("\n");
    }
}

void bfsGraph(vector<int> adjList[], int vertex){

    bool visited[vertex+1]; 
    // why one more because : to mkae index 0 to 1, to index 1 as fiest node
    for(int i=1; i<=vertex; i++){
        visited[i] = false;  // Make it unvisited at first
    }
    queue<int> q; // queue to store the node to be visited later
    
    // Make start vertex as 1
    int s = 1;
    visited[s]=true;
    q.push(s);
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << " ";
        // traversing the in adjency list of that vertex ad mode which is explored;
        for(int i = 0; i<adjList[node].size(); i++){
            // adjecent node or connect vertec of vertex node if not visted make it visited
            if(visited[adjList[node][i]]==false){
                visited[adjList[node][i]] = true;  
                q.push(adjList[node][i]);
            }
        }
    }
}
int main(){
    int V = 6;
    vector<int> adj[V + 1]; // make it plus one to make it more index to size as index is taken from 1
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 2, 4);
    addEdge(adj, 3, 5);
    addEdge(adj, 4, 1);
    addEdge(adj, 4, 6);
    addEdge(adj, 5, 6);

    bfsGraph(adj, V);

    return 0;
}