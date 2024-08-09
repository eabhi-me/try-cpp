#include<iostream>
using namespace std;
int squareRootSearch(int n){
    int high = n/2;
    int start=1;
    int ans;
    while(start<=high){
        int mid = (start+high)/2;
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
    cout << squareRootSearch(30);
    return 0;
}