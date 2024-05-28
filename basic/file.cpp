#include<iostream>
#include<fstream> // include to both ifstream and ofstream
using namespace std;
int main(){
ofstream myfile("name.txt"/*name of the file*/); // writing to fie
// writing contect to file
myfile << "hello how are you. are you okay? is this you" << endl << "this is new line";
myfile.close(); // closing the file
return 0;

/*
ifstrem myfile("name.txt"); // reading from file
ofstream myfile("name.txt"); // writing to file
*/
}