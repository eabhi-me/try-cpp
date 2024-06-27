#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str1 = "Hello  World!";
    string str2("This is a way of declaring string");
    cout << str1 << " and " << str2 << endl;
    cout << str1[0] << endl;
    // to get ascii value use int
    for(char c : str1){
        cout << c << ", ";
    }
    return 0;
}
