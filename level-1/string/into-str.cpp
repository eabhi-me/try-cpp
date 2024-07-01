#include<iostream>
#include<string.h>
using namespace std;

int main(){
    string str1 = "Hello  World";
    cout << "Capacity of srt1: " << str1.capacity();
    cout << endl<< "Length of str1: " << str1.length();
    string str2("This is a way of declaring string");
    str1.resize(5); // it reduse the size but capacity and length remain same
    cout << endl<< "The capacity of str1 after resize: " << str1.capacity() << endl;
    str1.shrink_to_fit();
    cout << endl << "The capacity and lenght after shrink to fit: " << str1.capacity() << " and " << str1.length();
    cout << endl << str1 << " and " << str2 << endl;
    cout << str1[0] << endl;
    str1.push_back('!'); // you can push only a character
    // to get ascii value use int
    for(char c : str1){
        cout << c << ", ";
    }
    cout << endl << "The caacity of st2: " << str2.capacity();
    cout << endl << "The length of str2: " << str2.length();

    // take input until new line  or press enter for new line
    // string str3;
    // cout << endl << "Input using getline: ";
    // getline(cin,str3);
    // str3.pop_back();
    // cout << str3 << endl;

    // chacater array
    // char c1[8];
    // cout << "Character Array: ";
    // cin >> c1;
    // // c1.pop_back(); you cannot use this as not applicable in charqcter array
    // cout << c1;
    return 0;
}
