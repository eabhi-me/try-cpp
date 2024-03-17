#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "enter the number: ";
    cin >> num;
    // ptn1
    int i=1;
    while(i<=num){
        int j=1;
        int sum = 0;
        while(j<=i){
            sum = sum+1;
            cout << " " << sum << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    // ptn2
   /* int k=1;
    while(k<=num){
        int l=1;
        while(k<=l){
            cout << " * ";
            l++;
        }
        cout << endl;
        k++;
    }
    */

    // Upper triangular matrix
    int rows = num;
    int cols = num;
    cout << "Upper triangular matrix:" << endl;
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            if (j >= i) {
                cout << " * ";
            }
            else{
                cout << "   ";
            }
        }
        cout << endl;
    }

    // pattern 3

    int num1;
    cout << "enter the dimension of the matrix: ";
    cin >> num1;
    int row1 = 1;
    while(row1 <= num1){
        int col1 = 1;
        while(col1<=row1){
            char ch = 'A' + row1 + col1 - 2;
            cout <<" " << ch << " ";
            col1++;
        }
        cout << endl;
        row1++;
    }

    // pattern 3
    int row2 = 1;
    while(row2 <= num1){
       int col2 = 1;
        while(col2 <= num1){
            if((row2+col2)%2==0){
                cout << " 0 ";
            }else{
                cout << " 1 ";
            }
            col2++;
        }
        cout << endl;
        row2++;
    }
    

    return 0;
}
