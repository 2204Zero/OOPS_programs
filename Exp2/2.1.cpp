// Objective - C++ programs using concept of structure
// WAP in  C++ entering student details with the help of structure
#include <iostream>
using namespace std;
int main (){
    struct student{
        int rollno;
        char name[20];
        float fees;
    }S;

    cout << "Enter your roll no\n";
    cin >> S.rollno; 
    cout << "Enter your name\n";
    cin >> S.name; 
    cout << "Enter your fees\n";
    cin >> S.fees;
    
    cout << "Roll no :"<<S.rollno<<endl;
    cout << "Name :"<<S.name<<endl;
    cout << "Fees :"<<S.fees<<endl;

    return 0;
}