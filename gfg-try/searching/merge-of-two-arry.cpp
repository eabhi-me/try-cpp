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
void mergeArray(int temp[], int arr1[], int arr2[], int n1, int n2){
    for(int i=0; i<n1; i++){
        temp[i]=arr1[i];
    }
    for(int i= 0; i<n2; i++){
        temp[n1+i]=arr2[i];
    }
    bubbleSort(temp,n1+n2);
}
int main(){
    int arr1[]={4,5,45};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={6,7,8,9};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int temp[n1+n2];
    mergeArray(temp,arr1,arr2,n1,n2);
    for(int i=0;i<(n1+n2);i++){
        cout << temp[i] << " ";
    }
    return 0;
}