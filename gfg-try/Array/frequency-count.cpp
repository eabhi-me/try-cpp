#include<iostream>
using namespace std;
// wrong hai
int frequencyCount(int arr[],int n){
    int counter=0, count = 1, lEle=arr[0] ;
    for(int i=1; i<n; i++){
        
        if(arr[i]!=lEle){
            
            arr[counter] = count;
            counter +=1;
            count = 1;
            lEle = arr[i];
           
        }
        else if(arr[i]==lEle){
            count = count+1;
        }
    }
    arr[counter]=count;
    counter +=1;

    return counter;
}
int main(){
    int arr[]= {1,1,1,2,3,5,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int newNum =  frequencyCount(arr,n);
    for(int i = 0; i<newNum; i++){
        cout << arr[i] << " "; 
    }
    return 0;
}