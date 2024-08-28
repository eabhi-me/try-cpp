#include<iostream>
using namespace std;
int squareRootSearch(int n){
    int high = n/2;
    int start=0;
    int mid, ans;
    if(n==0 || n==1){
        return n;
    }
    while(start<=high){
        mid = (start+high)/2;
        if(mid*mid==n){
            return mid;
        }
        else if(mid*mid>n){
            high = mid-1;
        }
        else{
            start = mid+1;
            ans = mid;
        }
    }
    return ans;
    
}
int main(){
    cout << squareRootSearch(0);
    return 0;
}