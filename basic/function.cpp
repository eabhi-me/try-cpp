#include<iostream>
using namespace std;
 double factorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}

int main(){
    cout << "Hello, World!" << endl;
    cout << "Factorial of 5 is: " << factorial(5) << endl;
    cout << "Factorial of 6 is: " << factorial(6) << endl;
    return 0;


    /*
    Parameters and Arguments:
    Information can be passed to functions as a parameter. Parameters act as variables inside the function.
    Parameters are specified after the function name, inside the parentheses.
    When a parameter is passed to the function, it is called an argument. So, from the example above: fname is a parameter, while Liam, Jenny and Anja are arguments.
    A parameter with a default value, is often known as an "optional parameter". From the example above, country is an optional parameter and "Norway" is the default value.
    
    Instead of defining two functions that should do the same thing, it is better to overload one.
    In the example below, we overload the plusFunc function to work for both int and double:

    int plusFunc(int x, int y) {
        return x + y;
    }

    double plusFunc(double x, double y) {
        return x + y;
    }

    int main() {
        int myNum1 = plusFunc(8, 5);
        double myNum2 = plusFunc(4.3, 6.26);
        cout << "Int: " << myNum1 << "\n";
        cout << "Double: " << myNum2;
        return 0;
    }
    */
}