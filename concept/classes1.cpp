#include<iostream>
using  namespace std;
// DEFINE CLASS
class human{
    public: // Ascess Method public from outside also
    string name;
    int age;
    string dob;
    void greet(); // Declare Method
    // Declare method inside class
    void sayhello(){
        cout << "Hello, My Name is " << name << endl;
    }
    private: // Private ascess inside class only
    string status;
    int income;
    public: 
    // Declaring method function to ascess the priavte from outside calss
    void getIncome(int money){
        income = money;
    }
    int sayIncome(){
        return income;
    }

};
// define outside the class by this method
void human::greet(){
    cout << "Good Morning" << endl;
    }

// MAIN FUNCTION 
int main(){
    human me, ernst; // create object under class
    me.name = "Abhi";
    me.age = 19;
    ernst.age = 20;
    ernst.name = "Albert";
    me.sayhello(); // call function
    cout << "My age is " << ernst.age << endl;
    ernst.greet();
    // Assign data to private form outside class as method is declared in public
    me.getIncome(200);
    cout << me.sayIncome();
    return 0;
}