// objective => implement class and object concepts
// question => wap in c++ enter student data and print using class and object

#include <iostream>
using namespace std;

class student{
    private :
    int roll_no;
    char name[20];

    public:
    void input (){
       cout << "Enter your roll no\n";
       cin >> roll_no;
       cout << "Enter your name\n";
       cin >> name;
    }

    void show(){
        cout << "Your roll no is : " << roll_no << endl;
        cout << "Your name is : " << name << endl;
    }
    
};



int main(){
    class student S;
    S.input();
    S.show();

    return 0;
}