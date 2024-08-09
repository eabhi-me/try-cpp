#include<iostream>
using namespace std;
void twoSum(int arr[],int n,int sum){
    int start = 0, end = n-1;
    while(start<end){
        if(arr[start]+arr[end]==sum){
            cout << "index " <<start <<" + "<<end << " = "<< sum;
            return;
        }
        else if(arr[start]+arr[end]>sum){
            end=end-1;
        }
        else{
            start=start+1;
        }  
    }
    cout << "not found";
}

int main(){
    int arr[]={4,5,8,10,15,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    twoSum(arr,n,34);
    return 0;
}