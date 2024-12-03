#include<iostream>
#include<vector>
using namespace std;

// This is calling to dfs if node s as ww pass it from the every vertex if not visited;
void dfsRec(vector<int> adjList[],int s, bool visited[]){
    visited[s]=true;
    cout<< s << " ";
    for(auto x:adjList[s]){
        if(visited[x]==false){
            dfsRec(adjList,x,visited);
        }
    }
}

// Here calling dfs rec for every vertex in not visited
// To handle the case when the disconndected  vertex in graph
int dfsSearchDis(vector<int> adjList[], int vertex){
    int count = 0; // disconnected part count
    bool visited[vertex]= {false};
    for(int i=0; i<vertex; i++){
        if(visited[i]==false){
            count = count+1;
            dfsRec(adjList,i,visited);
        }
    }
    cout << "\nThe Island in grapgh is ";
    return count;
}

void addEdge(vector<int> adjList[], int u, int v){
    adjList[u].push_back(v);
    adjList[v].push_back(u);
}
int main(){
    int v = 6;
    vector<int> addGraph[v];
    addEdge(addGraph,0,4);
    addEdge(addGraph,2,3);
    addEdge(addGraph,4,2);
    addEdge(addGraph,1,5);
    cout << dfsSearchDis(addGraph,v);

}