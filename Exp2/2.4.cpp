#include <iostream>
using namespace std;

struct student {
    int roll_no;
    char name[20];
    float fees;
    int marks;
};

int main (){
    int n;
    struct student S[n];

    printf("Enter no. of students you want to enter marks of \n");
    scanf("%d",&n);
    
    printf("Entering the details of students\n");

    for (int i = 0; i <= n; i++){
        cout << "Enter roll no " <<endl;
        cin >> S[i].name;
        cout << "Enter name " <<endl;
        cin >> S[i].name;
        cout << "Enter fees " <<endl;
        cin >> S[i].fees;
        cout << "Enter marks " <<endl;
        cin >> S[i].marks;
    }
    
    printf("Printing the details of students\n");
    
    for (int i = 0; i <= n; i++){
        cout << "roll no :" << S[i].roll_no<<endl;
        cout << "name :" << S[i].name<<endl;
        cout << "fees :" << S[i].fees<<endl;
        cout << "marks :" << S[i].marks<<endl;
    }

    return 0;
}