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
int unboundedBSearch(int arr[],int val){
    if(arr[0]==val)
        return 0;
    int i = 1;
    while(arr[i]<val){
        i = i*2;
    }
    if(arr[i]==val){
        return i;
    }
    return binary_search(arr,val,(i/2)+1,i-1);
}

int main(){
   int arr[1000]={1,2,3,5,8,9,10,45,100,500,589,758,855,899,1000,1211,1500,2000};
   cout << "the popsition of search is " << unboundedBSearch(arr,1000)<<endl;
//    cout << binary_search(arr,5,0,10);
}