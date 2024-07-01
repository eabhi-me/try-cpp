#include<iostream>
#include<string>
using namespace std;

int main(){
    // way of declaring string
    string str1 = "heloo 1 way";
    string str2("Hello, 2 way");
    string str3(str1); // copy form st1
    string str4(5,'h'); //hello five time only chacter allowed
    string str5(str1,3,4); //copy str1 form index 3 and 4 character
    string str6(str1.begin(),str1.begin()+3); // cpoy first three character from str1

    // Method
    string str7 = str3; // assignment
    str4.clear();
    str4.append("New Line");
    str4.append(str1,0,5);

    cout << str3.at(2) << endl;
    cout << str1 << endl;
    cout << str2 << endl;
    cout << str3 << endl;
    cout << str4 << endl;
    cout << str5 << endl;
    cout << str6 << endl;
    cout << str2.front() << endl;
    cout << str2.back() << endl;

    
}