#include<iostream>
using namespace std;

// or use a array to store to dynamic as single pointer
// int *arr1;

//double pointer is used to create an matrix that may have varible or different size column

int main(){
    int n = 5;
    int *arr1[n];
    for(int i = 0; i<n; i++){
        
    }







    int m=5;
    int **arr; // double pointer:  to store the pointer
    arr = new int *[m]; // its member have a pointer with 
    for(int i=0; i<m; i++){
        arr[i] = new int[i+1]; // assinging each member a pointer with size i+1;
    }

    // assigning the values
    for(int i=0;i<m; i++){
        for(int j = 0; j<i+1; j++){
            arr[i][j]= i*5+j*2;
        }
    }
    // traversing
    for(int i=0;i<m; i++){
        for(int j = 0; j<i+1; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}