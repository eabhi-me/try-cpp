#include<iostream>
using namespace std;
void d2b(int n){
    if(n==0){
        return;
    }
    d2b(n/2);
    cout << (n%2);
}

void n2one(int n){
    if (n==0){
        return;
    }
    cout << n;
    n2one(n-1);
}

void one2n(int n){
    if (n==0){
        return;
    }
    one2n(n-1);
    cout << n;
}

int sumN(int n){
    if(n==0){
        return n;
    }
    return n + sumN(n-1);

    // This may be also a way
    // while(n>0){
    //     return n + sumt(n-1);
    // }
    // return 0;
}

bool checkPalindrome(string &str, int start, int end){
    /* thi is also correct
    bool val = false;
    while(start<=end){
        return (str[start]==str[end] && checkPalindrome(str,start+1, end-1));
    } 
    val = true;
    return val; 
    */

   if(start>=end){
    return true;
   }
   return (str[start]==str[end] && checkPalindrome(str,start+1, end-1));

}

int sumDgt(int n){
    while(n!=0){
        return n%10 + sumDgt(n/10);
    }
    return 0;
}

int main(){
    // d2b(5);
    // one2n(10);
    // cout << sumN(3);
    string str = "hhh5hhh";
    cout << checkPalindrome(str,0,(str.length()-1));

    cout << sumN(10);
    cout << endl <<sumDgt(15645);
    return 0;

}