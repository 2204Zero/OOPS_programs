// Objective - C++ programs using concept of structure
// WAP in  C++ enter two student details with n subject marks using array with-in structure
#include<iostream>
using namespace std;

struct student {
   
        int rollno;
        char name[20];
        float fees;
        int marks[5];
    }S;

    int main(){
    cout << "Enter your roll no\n";
    cin >> S.rollno; 
    cout << "Enter your name\n";
    cin >> S.name; 
    cout << "Enter your fees\n";
    cin >> S.fees;
    cout << "Enter subjects makrs\n";
    for(int i=0; i<5;i++){
        cin >> S.marks[i];
    }
    
    cout << "Roll no :"<<S.rollno<<endl;
    cout << "Name :"<<S.name<<endl;
    cout << "Fees :"<<S.fees<<endl;
    cout << "subjects makrs\n";
    for(int i=0; i<5;i++){
        cin >> S.marks[i];
    }
        return 0;
    }