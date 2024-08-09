#include<iostream>
using namespace std;
int binary_search(int arr[],int val, int start, int end){
    while(start<=end){
        int mid = (start+end)/2;
        if(arr[mid]==val){
            return mid;
        }
        else if(arr[mid]<val){
            start = mid+1;
        }
        else{
            end = mid-1;
       }
    }
    return -1;
    
}
int searchlogn(int arr[], int val, int start, int end){
    int mid = (start+(end-start))/2;
    if(arr[mid]==val){
        return mid;
    }
    if(arr[mid]>arr[0] && arr[mid]>val && arr[0]<=val){ // last and is to check the corner condition, rest are to check the serach in left or right
        return binary_search(arr,val,start,mid-1);
    }
    else if(arr[mid]<val && arr[mid]<=arr[end] && arr[end]>=val){ // last and is to check th corner contion
        return binary_search(arr,val,mid+1,end);
    }
       

}
int main(){
    int arr[10]={4,5,6,7,8,9,0,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The position is " << searchlogn(arr,3,0,n) << endl;
    cout << binary_search(arr,3,7,n);
    return 0;
}