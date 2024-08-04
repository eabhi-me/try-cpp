#include<iostream>
#include<list>
using namespace std;
int main(){

    list<int> mylist;
    for(int i = 0; i<10; i++){
        mylist.push_back(i%8);
    }
    list<int>::iterator it, it1;
    for(auto it = mylist.begin(); it!=mylist.end(); it++){
        cout << *it << ", ";
    }
    // cout << "\nNEW" << endl;
    // for(auto it1 = mylist.rbegin(); it1!=mylist.rend(); it1++){
    //     cout << *it1 << ", ";
    // }


    cout << "\nManiulation \n";
    list<int> mylist2 = mylist; // copying the list;
    cout <<"Begin Element: " << mylist2.front()  << ", Last Element: " << mylist2.back() <<endl;
    cout << "Sorting: ";
    mylist2.sort();
    mylist2.pop_back();
    mylist2.pop_front();
    cout <<"Size of Mylist2: " << mylist2.size() << endl; // LIst has no member as length
    mylist2.unique();
    for(auto it:mylist2){
        cout << it << ", ";
    }
    cout << "Unique Element: ";
    list<bool> boolVal{1,1,0,1,0,0,0,1};
    boolVal.unique();
    boolVal.sort();
    boolVal.unique();
    for(auto it:boolVal){
        cout << it << " ";
    }

    // list<string> nameStudent{"Harman","Aryan","Abhi","Noone","Somebody"};
    // for(auto it2:nameStudent){
    //     cout << it2 << " | ";
    // }


    return 0;
}
