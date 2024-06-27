#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void subArray(int arr[], int n){
    for(int i=0; i<n; i++){ // to select p1
        for(int j=0; j<n; j++){ // to select p2
            for(int k=i; k<=j; k++){ // to print b/w p1 to p2
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}

// logic in not understand, how it works
void subSequence(int arr[], int n){
    unsigned int opsize = pow(2,n);
    for( int counter=1; counter<opsize; counter++){
        for(int j=0; j<n; j++){
            if(counter & (1<<j)){
                cout << arr[j] << " ";
            }
        }
        cout << endl;
    }
}

int main(){
    int sampleArray[]={4,5,8,9,6,};
    int n = sizeof(sampleArray)/sizeof(sampleArray[0]);
    // subArray(sampleArray,n); 
    subSequence(sampleArray,n);
    return 0;
}


/*
    Logic: For sub array
    1 loops to pick strting point
        2 loops to pick ending point
            3 loops to print between 1 to 2 point

    time complixity O(n^3)
    auxiliary space O(1)
*/