
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num, tempNum;
    cout << "Enter The number: ";
    cin >> num;
    cout << "Entered Number is: " << num << endl;
    int res = 0;
    int i = 0;
    tempNum = num;
    while (num != 0){
        num = num/10;
        i++;
    }
    cout << "Number of digits in the number is: " << i << endl;
    int j=0;
    while(j<i){
        int rem = tempNum%10;
        tempNum = tempNum/10;
        cout << "rem: " << rem << endl;
        res =  res + rem*(pow(10,i-j-1));
        j++;
        cout << "res: " << res << endl;
    }
    cout << "Reversed Number is: " << res;
    return 0;
}
