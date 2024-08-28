#include<iostream>
using namespace std;

void bubbleSort(int array[], int n);
void insertionSort(int array[], int n);
void selectionSort(int array[], int n);

// Print function call
void print(int array[], int n){
    for(int i=0; i<n; i++){
       cout << array[i] << " ";
    }
}

// 
int main(){
    int array1[]= {1,5,2,4,6,8,10,50,7,0};
    int n = sizeof(array1)/sizeof(array1[0]);
    print(array1,n);
    cout << endl;
    // bubbleSort(array1, n);
    // insertionSort(array1,n);
    selectionSort(array1, n);
    print(array1,n);

}

// bubble sort
void bubbleSort(int array[], int n){
    for(int i=0; i<(n-1); i++){
        for(int j=0; j<(n-i-1); j++){
            if(array[j]>array[j+1]){
                swap(array[j], array[j+1]);
            }
        }
    }
}



// insertion sort
void insertionSort(int array[], int n){
    int i, j, key; // declaring three variable
    for(i=2; i<n; i++){ // iterate from 2 element, take second element as key
        key = array[i];
        j = i-1; // declare j aas 1-1;
        while(j>=0 && array[j]>key){
            array[j+1] = array[j];
            j = j-1; // move j toward left to check
            array[j+1]=key; // shifting value
        }
    } 
}
 /*
    process insetion sort----
    in this we take a variable "i" to iterate over the loop from 2nt to last;
    take a key variable assign it 2nd postion element;
    now take another variable j and j assign its value i-i, 1 less than i, so to check the left of key
    start a loop which iterate when j>0 (means left side)
    and when key value is less than lest side of as j change its postion until right order
    by swaping the adajcent position
    */



/*
    selection sort process-----
    The function selectionSort takes two parameters: 
    an array of integers array[] and an integer n representing the size of the array.
    The outer for loop iterates over each element in the array except the last one. 
    For each iteration, it assumes the current element (at index i) is the smallest.
    The inner for loop starts from the next element (at index i+1) and checks each subsequent element in the array. 
    If it finds an element smaller than the current minimum, it updates min_index to the index of this new minimum element.
    After the inner loop finishes, the smallest element in the unsorted part has been found. 
    The code then swaps this smallest element with the first element in the unsorted part (which is at index i). 
    This effectively moves the smallest element to its correct position in the sorted part and expands the sorted part by one element.
*/
void selectionSort(int array[], int n){
    for(int i = 0; i<n-1; i++){
        int min_index = i;
        for(int j=i+1; j<n; j++){
            if(array[j]< array[min_index]){
                min_index = j;
            }
            int temp = array[i];
            array[i] = array[min_index];
            array[min_index] = temp;


        }
    }
}