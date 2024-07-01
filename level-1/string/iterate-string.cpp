#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "Hello, this is VsCode";
    string str2("Not a bad way to decalre string");
    for (auto it:str1){
        cout << it;
    }
    cout << endl;
    string::iterator it1;
    string::reverse_iterator it2;
    for(it1 = str1.begin(); it1 !=str1.end(); it1++){
        if(*it1==' '){
            *it1='/'; //  repalce as upadate character
        }
        cout << *it1;
        
    }
    cout << endl << "Reverse using reverse_iterator: ";
    // using rbegin and rend
    for (it2=str1.rbegin(); it2 !=str1.rend(); it2++){
        if(*it2=='/'){
            *it2=' ';
        }
        cout << *it2;
    }
    cout << endl << "Using cbegin Iterator: ";
    // here const iterator only read allowed 
    // no modification is allowed
    for(auto it3 = str1.cbegin(); it3 !=str1.cend();it3++){
        cout << *it3;
    }

    // copy to charcter array
    char ch1[20];
    str1.copy(ch1,9,0);
    ch1[9] = '\0'; // to add null chacter at the end to stop the ch copying
    cout << endl <<"copy to ch: " << ch1;
    str1.swap(str2);
    cout <<endl << "string 2: "<< str2 << " String 1: "<< str1;
    return 0;
}