#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1 = "green";
    string str2 = "green";
    if(str1.compare(str2) == 0){
        cout << "Strings are equal" << endl;
    }else{
        cout << "Strings are not equal" << endl;
    }
    return 0;
}
