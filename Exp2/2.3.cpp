// Wap in c++ enter n  student detail with n subject marks using array with structure or with structure
#include<iostream>
using namespace std;

struct student {
    int roll_no;
    char name[20];
    float fees;
    int marks[5];
};
void main (){
    int i, n, j, m;
    struct student S[10];
    cout << "How many student data you want to enter";

    cin >> n;
    cout<< "Enter data\n";
    for (i = 0; i<n; i++){
        cout << "Enter roll no, name, fees\n";
        cin >> S[i].roll_no >> S[i].name >> S[i].fees;
        cin >> m;
        cout << "Enter subject marks\n";
        for (i = 0; i<n; i++){
            cin >> S[i].marks[i];
        }
    }
}