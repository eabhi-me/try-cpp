#include<iostream>
using namespace std;
class animal{   // Class declare
    public:     // Ascess Method - Can be ascessed also from outside the class
    int age;    // Attributes
    string name;
    string sound;
};          // Close
int main(){
    animal dog;   // create object name dog
        dog.age = 5;
        dog.name = "Jojo";
        dog.sound = "bho bho";
    cout << "The dog name is " << dog.name << " and age is " << dog.age << " sound is " << dog.sound << endl;
    return 0;
}