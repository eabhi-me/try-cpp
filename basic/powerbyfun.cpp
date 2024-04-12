#include<iostream>
using namespace std;
int power(int a, int b); 
// variable fraq nahi padta
int main(){
    int base, exp;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exp;
    int test = power(base, exp);
    cout << base << " raised power " << exp << " is " << test << endl;

    int test1 = power(2, 3);
    cout << "2" << " raised power" << " 3 is " << test1 << endl;


}
int power(int base, int exp){
    int result = 1;
    for(int i=0; i<exp; i++){
        result = result * base;
    }
    return result;
}