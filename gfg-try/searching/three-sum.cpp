#include<iostream>
using namespace std; 
void threesome(int arr[],int n, int targetsum){
    for(int i = 0; i<n-2; i++){
        int start = i+1, end = n-1;
        int sum = targetsum-arr[i]; // now become 2sum as it is..
        while(start<end){
            if(arr[start]+arr[end]==sum){
                cout << "triplet " << arr[i] << " + " << arr[start] <<" + "<<arr[end] << " = "<< targetsum;
                return;
            }
            else if(arr[start]+arr[end]>sum){
                end=end-1;
            }
            else{
                start=start+1;
            }  
        }
    }
    cout << "not found";
}
int main(){
    int arr[] = {1,4,5,6,7,8,9,10,12,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    threesome(arr,n,20);
    return 0;
}