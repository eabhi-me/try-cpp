// Must have to learn, incomplete as left not understand...
#include<iostream>
#include<algorithm>
using namespace std;
void merge2arr(int arr1[],int arr2[],int n1, int n2){
    int i = 0,  j = 0;
    bool arr1EndEl;
    while (i<n1 && j<n2)
    {
       if (arr1[i]<arr2[j])
       {
        cout << arr1[i] << " ";
        i++;
        arr1EndEl = true;
       }
       else if (arr1[i]>arr2[j])
       {
        cout << arr2[j] << " ";
        j++;
        arr1EndEl = false;
       }  
    }
    // check for the remaining element in ohter element
    if (arr1EndEl){
       while (j<n2){
            cout << arr2[j] << " ";
            j++;
        }
    }
    else{
        while(i<n1){
            cout << arr1[i] << " ";
            i++;
        }
    }
}

// To seperate the element into their respective size
void seperateSort(int arr1[],int arr2[],int n, int m){
    int end1 = n-1,  start2 = 0;
    // bool arr1EndEl;
    while (arr1[end1]>arr2[start2]){
        swap(arr1[end1],arr2[start2]);
        end1--;
        start2++;
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}

// To print
void printarr(int arr[],int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
int main(){
    int arr1[]={1,4,8,10,14,21,90};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]= {2,3,5,7,15,20,86};
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    seperateSort(arr1,arr2,n1,n2);
    printarr(arr1,n1);
    cout << "\nsecond arr: " << endl;
    printarr(arr2,n2);

    // merge2arr(arr1, arr2, n1, n2);

    return 0;
}