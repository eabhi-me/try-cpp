#include<iostream>
using namespace std;
// inset at specific position
void insertEle(int arr[],int n, int key, int position){
    for(int i = n-1; i>=position; i--){
        arr[i+1]=arr[i];
        
    }
    arr[position] = key;
}


int main(){
    int sampleArray[] = {4,8,7,5,1,2,3,4,8,9,5,8};
    int sizelength = sizeof(sampleArray)/sizeof(sampleArray[0]);
    int n = sizelength;
    cout << "Before inserting: ";
    for(int i=0; i<n; i++){
        cout << sampleArray[i] << " ";
    }
    cout << endl << "After Insertion: ";
    // calling at specific function
    insertEle(sampleArray,n,56,2);
    n++;
    for( int i=0; i<n; i++){
        cout << sampleArray[i] << " ";
    }

    return 0;
}