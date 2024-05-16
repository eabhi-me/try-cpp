#include<iostream>
using namespace std;
int binarySearch(int array[], int n,  int key);

int main(){
    int sample1[]= {1,5,8,10,15,20,25,30};
    int n = sizeof(sample1)/sizeof(sample1[0]);
    cout << binarySearch(sample1, n, 30);
    return 0;}

int binarySearch(int array[], int n, int key){
    int start = 0;
    int end = n-1;
    int mid;
    while(start <= end){
        mid = (start+(end))/2;
        if(array[mid]==key){
            return mid;
        }
        else if(array[mid]>key){
            end = mid-1;
        }
        else if(array[mid]<key){
            start = mid+1;
        }
    }
    return -1;
}