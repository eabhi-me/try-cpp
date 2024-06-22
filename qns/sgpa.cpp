#include<iostream>
#include<string.h>
using namespace std;
int n=9;
int grade[9];
void gradeCalc(int array[], int n){

    for(int i=0; i<n; i++){
        if(array[i]>=81){
            grade[i] = 10;
        }
        else if(array[i]<81 && array[i]>=71){
            grade[i] = 9;
        }
        else if(array[i]>=61){
            grade[i] = 8;
        }
        else if(array[i]>=56){
            grade[i] = 7;
        }
        else if(array[i]>=51){
            grade[i] = 6;
        }
        else if(array[i]>=41){
            grade[i] = 5;
        }
        else if(array[i]>=35){
            grade[i] = 4;
        }
        else if(array[i]>=25){
            grade[i] = 2;
        }
        else{
            grade[i]=0;
        }
        
    }
}
float cgpaCalc(int arrayGrade[], int arrayCradit[], int n){
    float cgparun=0, cgpa, totalcradit = 0;
    for(int i = 0; i<n; i++){
        totalcradit = totalcradit + arrayCradit[i];
        cgparun = cgparun + (arrayGrade[i]*arrayCradit[i]);
    }
    cgpa = cgparun/totalcradit;
    return cgpa;
}

void print(int array[],int n){
    for(int i=0; i<n; i++){
        cout << array[i] <<" ";
    }
}
int main(){
    string subSem1[9] = {"BSCH-401","CS","ECE" "EE","Maths1","ECElab","EElab","PhyLab","CSlab"};
    string subSem1[9] = {"BSCH","MATH2","ESME1", "ESME2", "ESME3", "ESME4", "ESME5", "HSMC","EVS"};
    int cradit1[9] = {2,2,2,2,4,1,1,1,1};
    int cradit2[9] = {4,4,2,2,1,1,1,1,0};
    int marksSem1[9]={89,56,78,99,95,96,85,75,89};
    int marksSem2[9]={89,99,89,56,89,56,23,57,89};
    cout << "Marks: "; 
    print(marksSem1,9);
    cout << endl;
    cout << "MarksSem1: "; 
    print(marksSem2,9);
    cout << endl;
    gradeCalc(marksSem1,9);
    cout << "GradeSem1 : ";
    print(grade,9);
    cout << endl<< "CGPA : " << cgpaCalc(grade,cradit1,9);
    return 0;


}

