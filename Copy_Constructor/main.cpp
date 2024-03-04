#include <iostream>

using namespace std;

class MyClass {
public:
    int data;

    MyClass(int data) {
        MyClass::data = data;
        cout << "Start const" << this << endl;
    }

    ~MyClass() {
        cout << "start destr" << this << endl;
    }

};


int main() {
    MyClass a(1);

    MyClass b(3);
    return 0;
}
