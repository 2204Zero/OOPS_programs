// Objective - Understand the basics of CPP library variable, data input output
// WAP in cpp enter two numbers and perform all arithmatic operations
#include<iostream>
using namespace std;

int main(){
    int a, b, add, sub, mul, div, rem;

    cout<<"Enter two numbers\n";
    cin >> a >> b;
    add = a+b;
    sub = a-b;
    mul = a*b;
    div = a/b;
    rem = a%b;

    cout << "addition :" << add << endl;
    cout << "Subtraction :" << sub << endl;
    cout << "Multiplication :" << mul << endl;
    cout << "Division :" << div << endl;
    cout << "Remainder :" << rem << endl;

    return 0;
}