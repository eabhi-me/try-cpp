#include<iostream>
#include<vector>
using namespace std;
/*
 Vector can be passed into function two way be value and by refrence
 On passing by vlaue a copy in created and changing the value in function dose not change the main vector
 On passing by refrence is changeable the main vecot, this can also be restricted uisng const when passing vector

*/

// passes by value
void fun1(vector<int> myVec1){
    myVec1.push_back(50);
    cout << "Inside function output: ";
    for(int i:myVec1){
        cout << i << " ";
    }
}
void fun2(vector<int> & myVec2){
    myVec2.push_back(7656);
}

int main(){
    vector<int> myVec1({4,5,6,9,8,5});
    vector<int> myVec2({9,5,6,9,8,8});
    cout << "Main defined vector output: ";
    for(int i:myVec1){
        cout << i << " ";
    }
    cout << endl;
    // calling the function1
    fun1( myVec1);
    cout << endl << "Again call outside the function: ";
    for(int i:myVec1){
        cout << i << " ";
    }
    
    cout << endl << "Values of the vector 2: ";
    for(int i:myVec2){
        cout << i << " ";
    }

    // calling the fiunction 2 passes by refrence
    fun2(myVec2);
    cout << endl << "Vector value after the fun2 call";
    for(int i:myVec2){
        cout << i << " ";
    }


    return 0;
}