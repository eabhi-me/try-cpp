/*
Huge blunder error in cocde
do not know the error part
know
*/


#include<iostream>
using namespace std;
// largest element till i
class aOperation{
    public:
        int n;
        // int array[]; in your class aOperation. In C++, you cannot declare an array without specifying its size, especially in the context of a class member.
        int array[100];
        int msum;
        int lele;
        int key;
        aOperation(int array1[], int nl, int key1){
            for(int i=0; i<nl; i++){
                array[i]=array1[i];
            };
            n = nl;
            key = key1;
        };
        int lElememt(int array[], int n, int key){
            lele=array[0];
            msum=0;
            for(int i=0; i<key; i++){
            if(array[i+1]>array[i]){
            lele = array[i+1];
            msum = msum + array[i];
            }
        }
    return lele;
    };
};

int main(){
    int array1[]={2,2,5,8,6,3,4,7,8,5,6};
    int n = sizeof(array1)/sizeof(array1[0]);
    aOperation operation(array1,n,4);
    int c1 = operation.lele;
    int c2 = operation.msum;
    std::cout << c1 << c2;
    return 0;
}