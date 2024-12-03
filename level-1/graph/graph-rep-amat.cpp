#include <iostream>
#include <vector>
using namespace std;

// Function to add an edge to the adjacency matrix
void addEdge(vector<vector<int>>& adjMat, int u, int v) {
    adjMat[u][v] = 1;
    adjMat[v][u] = 1; // For undirected graph, add both u->v and v->u
}

// Function to print the adjacency matrix
void printGraph(const vector<vector<int>>& adjMat) {
    for (int i = 0; i < adjMat.size(); i++) {
        for (int j = 0; j < adjMat[i].size(); j++) {
            cout << adjMat[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int V = 5; // Number of vertices
    vector<vector<int>> adjMat(V, vector<int>(V, 0)); // Initialize adjacency matrix with 0s

    // Adding edges
    addEdge(adjMat, 0, 1);
    addEdge(adjMat, 0, 4);
    addEdge(adjMat, 1, 2);
    addEdge(adjMat, 1, 3);
    addEdge(adjMat, 1, 4);
    addEdge(adjMat, 2, 3);
    addEdge(adjMat, 3, 4);

    // Print the adjacency matrix
    printGraph(adjMat);

    return 0;
}