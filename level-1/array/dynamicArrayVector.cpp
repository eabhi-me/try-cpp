#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> myVec1({4,5,8,9,6,3,5,5}); // passing element using list
    vector<int> myVec2(10,0); // copying 10 zero element in array
    
    vector<int> myVec3; // only declare
    for(int i=0; i<8; i++){  // passing through lops
        myVec3.push_back(i); // using push_back at end
    }
    
    myVec3.push_back(45); // elememt at last add 
    myVec3.push_back(89);
    // myVec1.pop_back(); // removing the last element of the vec1
    myVec3.insert(myVec3.begin(),100);
    cout << "Cheching that vector is empty or not: " << myVec2.empty() << endl;;
    
    cout << "Finding the vector3 begin elememt: " << *myVec3.begin()<< endl; //defrenceing the pointer to get element
    cout <<"vector1 end value: " << myVec1.back() << endl; // pointer refring to the last element,  putting * to defrence
    // cout << *myVec3.rbegin() << *myVec3.rend(); // pointer the iterate in reverse
    
    // Iterate the element using the  pointer method the defrencing to get element
    cout << "vectoe3 vlaues are: ";
    for(auto it=myVec3.begin();it !=myVec3.end();it++){
        cout <<" " << *it<<" ";
    }
    cout << endl;
    cout << "vector2 values are: ";
    for(int ele :myVec2){ // iterating using for each method
        cout << ele << " ";
    }
    cout << endl;
    cout << "Vector4 values are: ";
    vector<int> myVec4(myVec1); //copying vector 1 into vector 4
    for(int i: myVec4){
        cout << i << " ";
    }
    cout << endl << "Vector5 value are: ";
    vector<int> myVec5;
    myVec5.assign(5,1);
    for(int i : myVec5){
        cout << i << " ";
    }
}
 



 // Notes
 /*
 vector_name.at(positon); and  vector_name[position];   to ascess the element at specific position 
 vector_name.swap(vector_name2); swap the values of vectors
 vector_name.size(); and vector_name.capacity();  return the size of vector and capacity
 vector_name.front(); and vector_name.back();   to ascess the first and last element
 vector_name.empty();    check that vector is empty or not give true and false
 vector_name.insert(position, value);   insert at specific position
 vector_name.insert(position, size, value);   insert at size no of value at specific position
 vector_name.insert(position, iterator1, iterator2);  insert at position value taken form iterator1 to iteraator2
 vector_name.clear();   for removing all element
 vector_name.erase(position);   for deleting at specofic location
 vector_name.erase(starting-position, ending_position);  for deletion in ranege
 
 */