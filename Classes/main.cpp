#include <iostream>
#include <string>

using namespace std;

class Human {
public:
    int age;
    string name;
    int weight;

    void Print() {
        cout << "Name: " << name << "\nWeight: " << weight << "\nAge: " << age << endl<<endl;
    }

};

class Point {
public:
    int x;
    int y;
    int z;
};


int main() {

    Human first;//объект класса
    first.age = 19; // обращение к полям класса
    first.name = "leha";
    first.weight = 100;
    //cout << first.age << " " << first.name << "\n";

    Human second;
    second.age = 21;
    second.name = "Sasha";
    //cout << second.age << " " << second.name;


    first.Print();
    second.Print();


    Point p1;
    p1 = {1, 3, 0};


    return 0;
}
