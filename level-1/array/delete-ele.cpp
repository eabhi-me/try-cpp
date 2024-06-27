#include<iostream>
using namespace std;
// to find element
int findEle(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return i;
        }
    }            
    return -1;
        
}

// to delete element
int deleteEle(int arr[], int n, int key){
    int pos = findEle(arr,n,key);
    if(pos==-1){
        cout << "Not Found";
        return n;
    }
    for(int i=pos; i< n-1; i++){
        arr[i] = arr[i+1];
    }
    return n-1;

}


int main(){
    int arr[] = {7,8,9,4,5,220,56,0,4}; // arr
    int n = sizeof(arr)/sizeof(arr[0]); // size
    int key = 0; // which to delete
    cout << "Before deletion: ";
    for(auto i : arr){
        cout << i << " ";
    }
    cout << endl << "After deletion: ";
    n = deleteEle(arr, n, key);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
