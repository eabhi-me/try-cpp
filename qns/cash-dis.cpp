#include<iostream>
using namespace std;
 int main(){
    int num;
    cout << "Enter The Amount: ";
    cin >> num;
    int notes[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count;
    for(int i=0; i<sizeof(notes)/sizeof(notes[0]); i++){
        count = num/notes[i];
        if(count>0){
            cout << notes[i] << " : " << count << endl;
            num = num - count*notes[i];
        }
    }
    return 0;

 }