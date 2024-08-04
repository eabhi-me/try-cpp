#include<iostream>
#include<limits>
using namespace std;
// given that J>i return max differrnece of J-i;
// O(N2) solution
int maxDifferrenceNaive(int arr[],int n){
    int maxDiff = INT32_MIN;
    for(int i = 0;  i<n-1; i++){
        for(int j = i+1; j<n; j++){
            if(arr[j]-arr[i]>maxDiff);
            maxDiff = arr[j]-arr[i];
        }
    }
    return maxDiff;
}
int maxDifferenceEffi(int arr[], int n){
    int minEle = INT32_MAX, maxEle = INT32_MIN , minIndex, maxIndex;
    for(int i=0; i <n; i++){
        if(arr[i]<minEle){
            minEle = arr[i];
            minIndex = i;
        }
        if(arr[i]>maxEle){
            maxEle = arr[i];
            maxIndex = i;
        }
    }
    // return maxEle-minEle;
    return maxIndex - minIndex;
}

int main(){
    int arr[]= {4,2,0,1,5,5,6,0,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< maxDifferenceEffi(arr,n);
    return 0;
}