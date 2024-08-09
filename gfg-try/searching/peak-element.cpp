#include<iostream>
using namespace std;
void findPeakElemrnt(int arr[], int n){
    for(int i=0; i<n; i++){
        if(n==1){
            cout << arr[0]; // explicit handle if only one element if present;
        }
        if(i==0){
            if(arr[i+1]<arr[i]){
                cout << arr[i] << " ";
            }
        }
        else if(i == n-1){
            if(arr[i-1]<arr[i]){
                cout << arr[i] << " ";
            }
        }
        else{
            if(arr[i-1]<arr[i] && arr[i+1]<arr[i]){
                cout << arr[i] << " ";
            }
        }
    }
}
int main(){
    int arr[] = {0,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    findPeakElemrnt(arr, n);
    return 0;
}