#include<iostream>
using namespace std;
void bubbleSort(int array[], int n){
    for(int i=0; i<(n-1); i++){
        for(int j=0; j<(n-i-1); j++){
            if(array[j]>array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
}

int UniqueArrange(int arr[], int n){
    bubbleSort(arr,n);
    int NewI = 1;
    for(int i=1; i<n; i++){
        if(arr[i]!=arr[NewI-1]){
            arr[NewI]=arr[i];
            NewI++;
        }
    }
    return NewI;
}

int NaiveSolution(int arr[], int n){
    bubbleSort(arr,n);
    int NewI = 1; int temp[n];
    temp[0] = arr[0];
    for(int i=1; i<n; i++){
        if(temp[NewI-1]!=arr[i]){
            temp[NewI]=arr[i];
            NewI++;
        }
    }
    for(int i=0; i<NewI; i++){
        arr[i]=temp[i];
    }
    return NewI;
}

int main(){
    int arr[] = {0,1,1,4,8,5,6,2,3,5,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int newSize = NaiveSolution(arr,n);
    for(int i=0; i<newSize; i++){
        cout<<arr[i] << " ";
    }
    return 0;
}