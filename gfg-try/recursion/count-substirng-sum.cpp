#include<iostream>
using namespace std;
int  countSubsets(int arr[], int n, int sum){
    if(n==0){
        return sum==0? 1:0;
    }
    return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum - arr[n-1]);
}

int main(){
    int arr[]= {10, 20, 15,45,1,5,6,9,25};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 25;
    	
    cout << countSubsets(arr, n, sum);
    	
    return 0;
}
