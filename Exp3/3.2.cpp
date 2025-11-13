// question => wap to perform all airthmetic opeartion using class and object [member function declaration outside the class]
#include <iostream>
using namespace std;

class arithmatic{
    private :
    int a;
    int b;
    int sum;
    public :
    void input(int a, int b);
    void operation();
    void print();
};

void arithmatic :: input (int a, int b){
        this -> a = a;
        this -> b = b;
    }

void arithmatic :: operation(){
    sum = a + b;
}

void arithmatic :: print(){
    cout << sum;
}

int main(){
    class arithmatic one;
    one.input(10,20);
    one.operation();
    one.print();

    return 0;
}