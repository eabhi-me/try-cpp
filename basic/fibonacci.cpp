#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter the digit to print the sequence: ";
    cin >> num;
    int num1 = 0, num2 = 1;
    int sum = 0;
    for(int i=1; i<=num; i++){
        cout << sum << " "; 
        num1 = num2;
        num2 = sum;
        sum = num1 + num2;
    }
    return 0;
}
  