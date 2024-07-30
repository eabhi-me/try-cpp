#include<iostream>
using namespace std;
void GenerateSubstring(string &str, string current = "", int i = 0){
    if(i==str.length()){
        cout << current<<", ";
        return;
    }
    GenerateSubstring(str,current,i+1);
    GenerateSubstring(str,current+str[i], i+1);

}
int main(){
    string str = "ABCD";
    GenerateSubstring(str);


    return 0;
}