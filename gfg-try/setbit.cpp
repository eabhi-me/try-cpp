#include<iostream>
using namespace std;
bool kBitSetL(int n, int k){
    return (n & (1 << k-1) );
}
bool kBitSetR(int n, int k){
    return ((n>>k-1)&1);
}
int countSetBit(int n){
    int count = 0;
    while(n!=0){
        if((n)&1){
            count = count + 1;
        }
        n = n >> 1;
    }
    return count;
}
int main(){ 
    bool res = kBitSetR(5,3);
    if (res){
        cout << "Set";
    }
    else{
        cout << "Not Set";
    }
    cout << endl << countSetBit(5);
    
    return 0;
}