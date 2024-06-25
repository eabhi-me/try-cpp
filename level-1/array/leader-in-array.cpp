#include<iostream>
using namespace std;

int main(){
    int array[]={45,10,4,5,8,9,2,1,4,0};
    int size = sizeof(array)/sizeof(array[1]);
    int max = array[size-1];
    cout << max;
    for(int i = size-1; i>=0; i--){
        if(array[i]>max){
            max = array[i];
            cout << " " << max;
        }

    }
    return 0;
}
