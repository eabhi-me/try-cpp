#include<iostream>
#include<string>
using namespace std;

int main(){
    char s ='N';
    int val =  s - 'A' + 'a';
    char s2 = val;
    cout << s2;
    string str = "ANSWER";
    cout << endl << str << endl;
    string::iterator it;
    for(it = str.begin(); it!=str.end(); it++){
        if(*it>='A' && *it<='Z'){
            *it = *it - 'A' + 'a';
        }
    }
    cout << str;


    return 0;
}