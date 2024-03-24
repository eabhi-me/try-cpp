#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int num;
    cout << "Enter a binary number: ";
    cin >> num;
    int i=0, res = 0;
    while(num !=0){
        if(num%10 != 0 && num%10 != 1){
            cout << "Invalid binary number" << endl;
            return 0;
        }
        res = res + num%10 * pow(2,i);
        num = num/10;
        i++;
    }
    cout << "Decimal of this is: " << res;
    return 0;
}