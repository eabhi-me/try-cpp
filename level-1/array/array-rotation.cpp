#include<iostream>
using namespace std;
void leftRotateArray(int array[], int n, int d){
    int p=1;
    while(p<=d){
        int lastElement = array[0];
        for(int i=0; i<n-1; i++){
            array[i]=array[i+1];
        }
        array[n-1] = lastElement;
        p++;
    }
}
void rightRotateArray(int array[], int n, int d){
    int p = 1;
    while(p<=d){
        int firstelement = array[n-1];
        for(int i=n-1; i>0; i--){
            array[i] = array[i-1];
        }
        array[0] = firstelement;
        p++;
    }
}
void print_array(int array[], int n){
    int i = 0;
    while(i<n){
        cout << array[i] << " ";
        i++;
    }
}
int main(){
int array_1[] = {1, -10, 3, 4, 5, 10};
int n = sizeof(array_1)/sizeof(array_1[0]);
cout << "Before Rotation" << endl;
print_array(array_1, n);
cout << endl;
cout << "After Rotation" << endl;
leftRotateArray(array_1, n, 2);
print_array(array_1, n);
}