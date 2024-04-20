
#include<iostream>
using namespace std;
void print_array(int array[], int n);
void max_min(int array[], int n);
// void sort_array(int array[], int n);
int main(){
            int n;
            cout << "Enter the size of the array: ";
            cin >> n;
            int array[n];
            int i = 0;
            cout << "Enter the elements of the array: ";
            while(i<n){
                cin >> array[i];
                i++;
            }
            // while(i>0){
            //     cout << "element at index " << n-(i) << " is " << array[n-i] << endl;
            //     i--;
            // }




            // int char_length;
            // cout << "Enter the length of the character array: ";
            // cin >> char_length;
            // char arr[char_length];
            // int j = 0;
            // while(j<char_length){
            //     cout << "Enter the character at index " << j << ": ";
            //     cin >> arr[j];
            //     j++;
            // }
            // while(j>0){
            //     cout << "Character at index " << char_length-(j) << " is " << arr[char_length-j] << endl;
            //     j--;
            // }


    // int array_1[] = {1, 10, 3, 4, 45, 6, 70, 8, 9};
    // int n = sizeof(array_1)/sizeof(array_1[0]);
    print_array(array, n);
    max_min(array, n);

return 0;
}

    void print_array(int array[], int n){
        int i = 0;
        while(i<n){
            cout << "element at index " << i << " is " << array[i] << endl;
            i++;
        }
    }

    void max_min(int array[] , int n){
        int i = 0;
        int max = array[0];
        int min = array[0];
        while(i<n){
            if(array[i]>max){
                max = array[i];
            }
            i++;
        }
        while(i>0){
            if(array[i]< min){
                min = array[i];
            }
            i--;
        }
        cout << "The largest element in the array is: " << max << endl;
        cout << "The smallest element in the array is: " << min << endl;
    }
    // void sort_array(int array[], int n){
    //     int i = 0;
    //     for(int j=0; j<n; j++){
    //         while(i<n){
    //             if (array[i]>array[i+1]){
    //                 int temp = array[i];
    //                 array[i] = array[i+1];
    //                 array[i+1] = temp;
    //             }
    //             i++;
    //         }
    //     }
    // while(i>0){
    //     cout << "element at index after sorting " << n-(i) << " is " << array[n-i] << endl;
    //     i--;
    // }
    // }