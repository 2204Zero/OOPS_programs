// Objective - Understand the basics of CPP library variable, data input output
// WAP in cpp enter your detial and print output
#include<iostream>
using namespace std;

int main(){
    int rollno;
    char name[20];
    char cname[20];
    float fees;

    cout << "Enter your roll no\n";
    cin>>rollno;
    cout << "Enter your name\n";
    cin>>name;
    cout << "Enter your college name\n";
    cin>>cname;
    cout << "Enter your fees\n";
    cin>>fees;

    cout << "Your roll no :" << rollno << endl;
    cout << "Your name :" << name << endl;
    cout << "Your college name :" << cname << endl;
    cout << "Your fees :" << fees << endl;

    return 0;
}