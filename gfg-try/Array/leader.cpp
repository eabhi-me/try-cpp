#include<iostream>
using namespace std;
void leaderON2(int arr[],int n){
    cout << arr[n-1]<<" ";
    for(int i=n-2; i>=0; i--){
        bool show = true;
        for(int j = i+1; j<n; j++){
            if(arr[j]>=arr[i]){
                show = false;
                break;
            }      
        }
        if(show){
            cout << arr[i] << " ";
        }
    }
}
void leaderON1(int arr[], int n){
    int currentLadder = arr[n-1];
    cout << currentLadder <<" ";
    for(int i = n-2; i>=0; i--){
        if(arr[i]>currentLadder){
            currentLadder = arr[i];
            cout << currentLadder<<" ";
        }
    }
}
int main(){
    int arr[]={1,45,1,89,56,2,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    leaderON1(arr,n);
    return 0;
}