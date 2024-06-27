#include<iostream>
#include<vector>
using namespace std;
vector<int> oddVec;
vector<int> evenVec;

void oddEvenSep(int arr[], int n){
    
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            evenVec.push_back(arr[i]);
        }
        else{
            oddVec.push_back(arr[i]);
        }
    }
}

int main(){
    int sampleArray[]={4,5,8,9,5,6,1,4,8,9,5,7,6};
    int n = sizeof(sampleArray)/sizeof(sampleArray[1]);
    oddEvenSep(sampleArray,n);
    cout << "Here are even values: ";
    for (int i : evenVec){
        cout << i << " ";
    }
    cout << endl << "Here are odd values: ";
    for( int i: oddVec){
        cout << i << " ";
    }


}