#include<iostream>
#include<limits.h> // to include limit 
using namespace std;
int f1=INT_MIN,f2=INT_MIN, f3 = INT_MIN; // give possible minimum value
void el3lar(int array[], int n ){
    for(int i=0; i<n; i++){
        if(array[i]>f1){
            f3=f2;
            f2=f1;
            f1=array[i];
        }
        else if(array[i]<f1 && array[i]>f2){
            f3=f2;
            f2=array[i];
        }
        else if(array[i]<f1 && array[i]<f2 && array[i]>f3){
            f3=array[i];
        }
    }
}
int main(){
    int array[]={-5,-1,-8,-5,0,89,-4,-7,-8,-9,-4};
    int n = sizeof(array)/sizeof(array[0]);
    el3lar(array,n);
    cout<<f1<<" "<<f2<<" "<<f3;
    return 0;
}