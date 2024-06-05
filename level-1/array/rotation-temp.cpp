#include<iostream>
using namespace std;
// rotation by one by one done
// rotation by using temp done

// rotation by Juggling Algorithm
// rotation by The Reversal Algorithm
void rotation(int array[], int n, int d){
    int temp[n];
    int j = 0;
    for(int i=d; i<n; i++){
        temp[j]=array[i];
        j++;
    }
    for(int i=0; i<d; i++){
        temp[j]=array[i];
        j++;
    }
    for(int i=0; i<n; i++){
        array[i]=temp[i];
    }
}
void print(int array[], int n){
    for(int i=0; i<n; i++){
        cout << array[i] << " ";
    }
}
int main(){
    int array[]={5,8,9,5,6,2,0,1,};
    int n = sizeof(array)/sizeof(array[0]);
    print(array,n);
    cout << endl;
    rotation(array, n , 4);
    print(array , n );
    return 0;

}
