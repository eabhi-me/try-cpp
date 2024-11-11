#include<iostream>
using namespace std;
void merge(int arr1[], int arr2[], int n1, int n2, int arr3[]){
    int i=0, j =0, k = 0;
    while (i<n1 && j<n2){
        if(arr1[i]<arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    while(i<n1){
        arr3[k++] = arr1[i++];
        k++; i++;
    }
    while(j<n2){
        arr3[k++] = arr2[j++];
    }
    
}

int main(){
    int arr1[] = {4,8,9,16,25,33,34};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[] = {7,18,19,20,32,45,50};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n1+n2];
    merge(arr1,arr2,n1,n2,arr3);
    for(auto i:arr3){
        cout << i <<" ";
    }
    return 0;
}
