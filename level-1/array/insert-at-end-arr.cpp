#include<iostream>
using namespace std;
// insert at the end
int insertAny(int arr[], int n, int key ,int capacity){
    if(n>=capacity){
        return n;
    }
        
    arr[n] = key;
    return n+1;
        
}
int main(){
    int sampleArray[20] = {4,8,9,6,2,1,47,7,6}; // 9 element
    int capacity =  sizeof(sampleArray)/sizeof(sampleArray[0]);
    int n = 10;
    cout << "Before inserting: ";
    for(int i=0; i<n; i++){
        cout << sampleArray[i] << " ";
    }
    cout << endl << "After Insertion: ";
    // calling at any function
    n = insertAny(sampleArray,n,70,capacity);
    n++;
    for( int i=0; i<n; i++){
        cout << sampleArray[i] << " ";
    }
    return 0;
}
// we get zero at unspecified position as capacity is 20