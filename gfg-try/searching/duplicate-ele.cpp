#include<iostream>
using namespace std;
int checkduplicate(int arr[], int n){
    bool* tempBool = new bool[n-1]();
    for(int i=1; i<n-1;i++){
        if(tempBool[arr[i]]==true){
            delete[] tempBool; // deallocate the array before returning
            return arr[i];
        }
        tempBool[arr[i]]=1;
    }
    delete[] tempBool; // Deallocate memory after not found any deplicate 
    return -1; // return -1 if no duplicate is found
}
int main(){
    int arr[]= {1,2,5,6,8,5,3,4,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << checkduplicate(arr,n);
    return 0;
}