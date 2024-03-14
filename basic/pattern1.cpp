#include<iostream>
using namespace std;
int main(){
    for(int i=0; i<3; i++){
        for( int j=0; j<3; j++){
            cout << " * " ;
        }
        cout << endl;
    }
    for(int i=0; i<3; i++){
        for( int j=0; j<3; j++){
            if(i+j==2){
                cout << " H " ;
            }
            else{
                cout << " 0 "; 
            }
        }
        cout << endl;
    }
    // i<=j, j>=i, i>=j, j<=i, i+j<=2, i+j>=2 do it for different patterns
    
    // one other way
    int r,c;
    cout << "enter the dimension as [r][c]: ";
    cin >> r >> c;
    int i=0;
    while(i<r){
        int j = 0;
        while(j<c){
            cout << " * ";
            j++;
        }
        cout << "\n";
        i++;

    }

}