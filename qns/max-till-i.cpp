#include<iostream>
using namespace std;
int maxTill(int array[], int n, int key);
int main(){
    int arraySp[]= {2,1,2,4,8,9,6,3};
    int n = sizeof(arraySp)/sizeof(arraySp[0]);
    cout << maxTill(arraySp, n, 6);
}

int maxTill(int array[], int n, int key){
    int large = array[0];
    for(int i = 0; i<=key; i++){
        if(array[i]>large){
            large = array[i];
        }
    }
    return large;

}
