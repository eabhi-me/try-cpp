#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

// Function to reverse a string using recursion
void reverseString(string &str, int start, int end){
    if(start >= end){
        return;
    }
    swap(str[start],str[end]);
    reverseString(str,start+1,end-1);
}
int main(){

    // 1st way
    string str1 = "heloo 1 way";
    reverse(str1.begin(),str1.end());
    cout << str1 << endl;

    // 2nd way
    string str2 = "hello 2 way";
    string reverse2(str2.rbegin(),str2.rend());
    cout << reverse2 << endl;

    // 3rd way
    string str3("No way HOME");
    int n = str3.length();
    for(int i=0;i<n/2;i++){
        swap(str3[i],str3[n-i-1]);
    }
    cout << str3 << endl;

    // 4th way
    string str4 = "Hello 4 way";
    int left = 0;
    int right = str4.length()-1;
    while(left<right){
        swap(str4[left],str4[right]);
        left++;
        right--;
    }
    cout << str4 << endl;

    // calling the function
    string str5 = "Hello 5 way";
    reverseString(str5,0,str5.length()-1);
    cout << str5 << endl;


    //one more way using stack
    // study later
}