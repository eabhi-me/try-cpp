#include<iostream>
using namespace std;
// binary search to find element and its position
int binarySearch(int arr[], int start, int end, int key){
    // input check case or in not shoterd or invalid input
    if(end<start){
        return -1;
    }
    int mid = start+(end-start)/2;
    if(arr[mid] == key){
        return mid;
    }
    if(arr[mid] < key){
        return binarySearch(arr,(mid+1),end,key);
    }
    return binarySearch(arr,start,(mid-1),key);


}
// to delete element
int delEle(int arr[], int start, int end, int key){
    int position = binarySearch(arr, start, end, key);
    if(position==-1){
        cout << "Not found";
        return end;
    }
    for(int i = position; i<end; i++ ){
        arr[i] = arr[i+1];
    }
    return end-1;
    

}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,15,16,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Array are: ";
    for (auto i : arr){
        cout << i <<" ";
    }
    cout << endl;
    int key = 10;
    cout << "Index of " << key << ": " << binarySearch(arr,0,n-1,key) << endl;
    n = delEle(arr,0,n,15);
    int keydel = 15;
    cout << "After deletion " << keydel << ": ";
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    

    return 0;
}