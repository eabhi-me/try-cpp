// data type, variable, input , output syntax , basic
// Abhi
// 2023-03-14 02:00:00
#include<iostream>
using namespace std;
int main() {
    int a = 5;
    cout << "The value of a is " << a  << endl;
    char b = 'A'; // character
    cout << "The value of b is " << b << endl;
    char c[] = "hello"; // string as a character array
    cout << "The value of c is " << c << endl;
    // c ke code cpp me chale hai... c ke code me %s use hota hai for string
    printf("The value of c is %s\n", c);
    cout << "Ascess element using the index" << endl;
    int i = 0;
    // sizeof(c) gives the size of the array in bytes
    // sizeof(c[0]) gives the size of the first element of the array in bytes
    // sizeof(c)/sizeof(c[0]) gives the length of the array
    // sizeof(c)/sizeof(c[0])-1 gives the last index of the array
    while( i < (sizeof(c)/sizeof(c[0])-1) ) {
        cout << "The value of c[" << i << "] is " << c[i] << endl;
        i++;
    }
    // bool data type
    bool d = true;
    cout << "The value of d is " << d <<endl;
    cout << "The Value of not d is " << !d << endl;
    // float 
    float e = 3.14;
    cout << "The value of e is " << e << endl;
    double f = 3.141592653589793238;
    cout << "The value of f is " << f << endl;
    // array
    int array[] = {1, 2, 3, 4, 5};
    cout << "The value of array[0] is " << array[0] << endl;
    int arSize = sizeof(array);
    cout << "The size of array is " << arSize << endl;
    int arLen = sizeof(array)/sizeof(array[0]);
    cout << "The length of array is " << arLen << endl;
    cout << "The Loop starts here" << endl;
    for(int i =0; i<5; i++) {
        cout << "The value of array[" << i << "] is " << array[i] << endl;
    }
    // Input the data
    int g;
    cout << "Enter the value of g" << endl;
    cin >> g;
    cout << "The value of g is " << g << endl;

    float h;
    cout << "Enter the value of h as float" << endl;  
    cin >> h;
    cout << "The value of the h is " << h << endl;

    bool iBool;
    cout << "Enter the value of iBool as bool" << endl;
    cin >> iBool;
    cout << "The value of iBool is " << iBool << endl;

    // declare the array and input the data
    int num; 
    cout << "Enter the number of elements in the array" << endl;
    cin >> num;
    int arr[num];
    int j = 0;
    while(j<num) {
        cout << "Enter the value of arr[" << j << "]" << endl;
        cin >> arr[j];
        j++;
    }
    printf("the value of j is %d\n", j); // j=3
    // this dose not print anything unless the value of j is change to 0
    j=0;
    while (j<num) {
        cout << "The value of arr[" << j << "] is " << arr[j] << endl;
        j++;
    }
    cout << "This is another loop to print the value of arr using for loop\n";
    // for loop se bhi print kar sakte hai
    for(int j=0; i=j<num; j++) {
        cout << "The value of arr[" << j << "] is " << arr[j] << endl;
    }
    cout << endl;
    // using c syntax
    int otherNum;
    printf("Enter the value of otherNum: ");
    scanf("%d", &otherNum);
    printf("%d", otherNum);

    // character ascii value
    char x = 65, y = 66, z = 67;
    cout << endl << x << y << z << endl;
   
    cout << (int)x << endl;

    // typecasting
    int number1 = 100;
    cout << (char)number1 << endl;

    // string
    string str = "Hello";
    return 0;
}