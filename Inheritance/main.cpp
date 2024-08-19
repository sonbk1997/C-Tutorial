#include <iostream>
using namespace std;

/*
    Single Inheritance
*/
class Employee {
public:
    float salary = 60000;
};

class Programmer : public Employee {
public:
    float bonus = 5000;
};

class Animal {
public:
    void eat() {
        cout << "Eating... " << endl;
    }
};

class Dog : public Animal {
 public:
    void bark() {
        cout << "Barking... " << endl;
    }
};

// Private inheritance
class A {
    int a = 4;
    int b = 5;
public:
    int mul() {
        return a*b;
    }
};

class B : private A {
public:
    void display() {
        int result = mul();
        cout << "multiplication is " << result << endl;  // private inheritance, mul() function of class A cannot accessed by object of class B.
        //It only be accessed by the member function of class B
    }
};

/*
 * Multi Level Inheritance
*/

class BabyDog : public Dog {
public:
    void weep() {
        cout << "Weeping..." << endl;
    }
};

int main()
{
    BabyDog bDog;
    bDog.eat();
    bDog.bark();
    bDog.weep();
    return 0;
}
