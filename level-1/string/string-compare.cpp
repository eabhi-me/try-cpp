#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1 = "green";
    string str2 = "green";
    if(str1.compare(str2) == 0){
        cout << "Strings are equal";
    }else{
        cout << "Strings are not equal";
    }

    // This return the value of the no position 
    // int value = string::npos;
    // cout<< endl << value << endl;


    string str3 = "Stranger Things";
    cout << endl << str3.find("v") << endl;
    cout << (int)str3.find("v") << endl;
    
    int found = str3.find("v");
    if (found != string::npos) {
 
        cout <<" found at: " << (found)
             << endl;
    }
 
    else
        cout  << " is not "<< endl;

    return 0;
}
