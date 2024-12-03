#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int> adjList[], int u, int v){
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}
void printGraph(vector<int> adjList[], int Vertex){
    for(int i=0; i<Vertex;i++){
        cout << "\nThe adjency list of vertex "<< i << "\n head";
        for(auto edge:adjList[i]){
            cout << "-> " << edge;
        }
        printf("\n");
    }
}
void dfsRec(vector<int> adjList[], int s, bool visited[]){
    visited[s]=true;
    cout << s << " ";
    for(auto x:adjList[s]){
        if(visited[x]==false){
            dfsRec(adjList,x,visited);
        }
    }
}
void dfsSearchCGrapgh(vector<int> adjList[], int vertex, int s){
    bool visited[vertex];
    for(int i=0; i<vertex;i++){
        visited[i]=false;
    }
    // Caaling the dfs recursive function of starting node
    dfsRec(adjList, s, visited);
    
}
int main(){
    int v = 5;
    int vertex = 5;
    vector<int> adGrph1[vertex]; // Adjacency List:  list representation
    addEdge(adGrph1,0,4);
    addEdge(adGrph1,0,3);
    addEdge(adGrph1,1,2);
    addEdge(adGrph1,1,4);
    addEdge(adGrph1,2,4);
    addEdge(adGrph1,3,4);
    // printGraph(adGrph1,vertex);
    dfsSearchCGrapgh(adGrph1,vertex,4);
    return 0;
}