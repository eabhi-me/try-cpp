#include<iostream>
using namespace std;
class species{
    public:
    bool sex; // 0 for female and 1 for male
    string name;
    string home;

};
class mammel:public species{
    public:
    int ageSpan=100;
    string home = "Land";
    void sayOut(){
        cout << "Hello I am Mammel"<< endl;
    };
    
};
class ampbhion:public species{
    public:
    string home = "Water";
    void sayOut(){
        cout << "Hello I am ampbhion"<< endl;
    };
};
class cocodile: public mammel {
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

}