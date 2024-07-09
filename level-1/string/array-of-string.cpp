#include<iostream>
#include<string>
#include<vector>
#include<array>
using namespace std;

int main(){

    // Using constsnt character
    const char* colour[4] = {"red","blue","green","black"};
    for(auto c: colour){
        cout << c <<", ";
    }
    cout << endl;
    // Using string class
    string colour1[5] = {"red", "orange", "white","yellow","pink"};
    for(auto c1: colour1){
        cout << c1 << ", ";
    }
    cout << endl;
    // Using vector class
    vector<string> colour2;
    colour2.assign(4,"red");
    colour2.push_back("yellow");

    for(auto c3: colour2){
        cout << c3 << ", ";
    }
    cout << endl;

    for(int i = 0; i<=colour2.size()-1; i++){
        cout << colour2[i] << ", ";
    }
    cout << endl;
    // using array class
    array<string,4> colour3{"noclour", "magenta", "maroon","aqua"};
    for(int j = 0; j<4; j++){
        cout << colour3[j] << ", ";
    }

    return 0;

}