// Constructor and child eleements in class
#include<iostream>
using namespace std;
class car{
    public: // access specifier
    // properties of the class
    int srNo; 
    string name;
    string model;
    int speed;
    float price;
    // constructor of the class
    car(int srno, string n, string m, int s, float p){
        srNo = srno;
        name = n;
        model = m;
        speed = s;
        price = p;
    };
    void drive(){
        cout<<"Engine started"<<endl;
        cout<<"Gear Up"<<endl;
        cout<<"Running"<<endl;
    };
    // second subclass which is not inherited by the child class
    class suzuki{
        public:
        string year;
        suzuki(string yr){
            year = yr;
        };
    };
};

// Child Class
class audi: public car{
    public:
    string year;
    // constructor of child class
    audi(string yr, int srno, string n, string m, int s, float p ) : car(srno, n, m, s, p) {
        year = yr;
    };
};
// Main function
int main(){
    // cerating an object of car class
    car c1(1, "Audi", "A4", 200, 5000000);
    cout<<c1.name<<endl;
    c1.drive(); // calling the drive method
    // creating an object of audi class which is child class of car
    audi a1("2024", 3, "Audi", "A4", 200, 5000000);
    cout <<"The model of the a1 object of audi class is "<< a1.model<<endl;
    // Second subclass object of car class which dose not inherit the car class method and properties
    car::suzuki s1("2024"); // ascessing the second subclass of car class
    cout<<"The suzuki made year "<< s1.year<<endl;
    return 0;

}