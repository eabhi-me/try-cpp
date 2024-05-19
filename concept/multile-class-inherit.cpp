#include<iostream>
using namespace std;
// base class
class species{
    public:
    bool sex; // 0 for female and 1 for male
    string name;
    string home;

};
// sub class under species
class mammel:public species{
    public:
    int ageSpan=100;
    string home = "Land";
    void sayOut(){
        cout << "Hello I am Mammel"<< endl;
    };
    
};
// sub class under species
class ampbhion:public species{
    public:
    int ageSpan = 120;
    string home = "Water";
    void sayOut(){
        cout << "Hello I am ampbhion"<< endl;
    };
};
// sub calss under subclass mammel
class cocodile: public ampbhion {
    public:
    string species;
    };

int main(){
    cocodile coco1;
    cout << coco1.ageSpan<<endl;
    coco1.sayOut();
    coco1.name = "SUMO";
    cout << coco1.name << endl;
    cout << coco1.home << endl;
    coco1.sex = 1;
    cout << coco1.sex <<endl;
    mammel Human;
    Human.name = "Abhi";
    cout<<Human.ageSpan<<" Years, Name is "<< Human.name;



}