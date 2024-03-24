#include<iostream>
using namespace std;
int main(){

    // using memory to store the binary number
    
    // use ctrl + k + c to coment
    // use ctrl + k + u to uncomment

    int num;
    cout << "Enter a decimal number: ";
    cin >> num;

    int arrlen = 0;
    int i = num; 
    cout << "entered number is: " << num << endl;
    while( i>0){
        i = i / 2;
        arrlen =  arrlen+1;
        cout << "devide by 2: " << i << "\n";
        
    }
    cout << "bit used is " << arrlen << endl;
    int arrayRes[arrlen];
    for(int j=0; j<=arrlen; j++){
        arrayRes[j] = num%2;
        num = num / 2;
    }
    cout <<"binary of this is: ";
    for(int k = arrlen; k>=0; k--){
        cout << arrayRes[k];
    }



    // without using memory to store the binary number
    // similarly we can use the same logic to convert decimal to binary


}