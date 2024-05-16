#include<iostream>
using namespace std;
int main(){
    int array[]= {1,2,3,4};
    int n = sizeof(array)/sizeof(array[0]);
    int lbar=1;
    for(int i=0; i<n; i++){
        
        cout << "( " << array[i] << " ) ";
        lbar = lbar+1;
    }
    return 0;
}

// Incomplete solution 
// solve it again