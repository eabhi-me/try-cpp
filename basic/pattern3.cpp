/*
    1 2 3 4 5 5 4 3 2 1
    1 2 3 4 * * 4 3 2 1
    1 2 3 * * * * 3 2 1
    1 2 * * * * * * 2 1
    1 * * * * * * * * 1

*/

#include<iostream>
using namespace std;
int main(){
    int num;
    // take dimension of the matrix
    cout << "Enter the number: ";
    cin >> num;
    // initialize the row
    int row1 = 1;
    while(row1 <= num){
        int col1 = 1, sum = 1;
        // left column of martox
        while(col1<=num-row1+1){
            
            cout << " " << sum << " ";
            sum = sum + 1;
            col1++;
        }
        // right column of matrix
        // as the sum is already initialized to 1, we can use it to print the right column
        // another initialization of sum2 to num-row1+1
        int sum2=num-row1+1;
        while(col1 <= (2*num)-1){
            if(col1 <= (2*num-1)&& col1 >= (num+row1-1)){
                cout << " " << sum2 << " ";
                sum2 = sum2 - 1;
            }
            else{
                cout << " * ";
            }
            col1++;
        }
        // starter row loop move to next row
        cout << endl;
        row1++;
    }
    return 0;
}