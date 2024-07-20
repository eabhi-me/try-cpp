#include<iostream>
using namespace std;
int hcf_of_num(int a, int b){
    if(a==b){
        return a;
    }
    else if(a>b){
        return hcf_of_num(a-b,b);
    }
    else{
        return hcf_of_num(a,b-a);
    }
}
 
int gcd_optmised(int a, int b){
    if(b==0){
        return a;
    }
    else
        return gcd_optmised(b,a%b);
}

int lcm_of_num(int a, int b){
    int product = a*b;
    int gcdres = hcf_of_num(a,b);
    return product/gcdres; 
}

int main(){
    int res = hcf_of_num(12,5);
    int res2 = lcm_of_num(12,5);
    cout << "HCF Of: "<< res << endl;
    cout << "LCM OF: " << res2 << endl;

    cout<< "new optimised way:  " << gcd_optmised(90,45);

    cout << "hello check modulus: " << 15%50;

    return 0;
}