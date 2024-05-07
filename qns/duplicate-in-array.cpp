#include<iostream>
using namespace std;
void print_array(int array[], int n);
int main(){
    int array[]= {6,1,2,5,6,3,4,1,4,5};
    int sum = 0, duplicate;
    int n = sizeof(array)/sizeof(array[0]);
    print_array(array, n);
    cout << endl << "Size Length of array " << n << endl;
    cout << "Duplicate Elements: ";
    for(int i=0; i<n; i++){
        for(int j = i+1; j<n ; j++){
            if(array[i]==array[j]){
                cout << array[i] << " ";
                break;
            }
        }
    }
    return 0;
}

// Defnition of function
// printf function of array
void print_array(int array[], int n){
    int i = 0;
    while(i<n){
        cout << array[i] << " ";
        i++;
    }
}


// if two frequency then (sum- xor sum )/2