#include<iostream>
#include<fstream>
using namespace std;
int main(){
    string readData; // variable to store the data
    ifstream myfile("name.txt");
    while(getline(myfile, readData)){ // reading from file line by line
        cout << readData << endl; // printing the data
    }
    myfile.close(); // closing the file

    return 0;
}