#include<iostream>
#include<math.h>
using namespace std;


// Logic-- check is not zero and check that and operator of n and n-1 are zero as power of 2 has only one set bit
bool powerOf2(int n){
    return (n != 0) && ((n & (n-1))==0);
}

// another method

bool isPower2(int n){
    return (ceil(log2(n)) == floor(log2(n)));
}

int main(){
    bool temp = isPower2(64);
    if(temp){
        cout << "YES";
    }
    else 
        cout << "no";
}