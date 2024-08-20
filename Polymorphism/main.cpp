#include <iostream>
using namespace std;

/*
 * Simple polymorphism
 * polymorphism at run time || base on override (ghi đè)
*/
class Animal {
public:
    void eat() {
        cout << "Eating...\n";
    }
};

class Dog : public Animal {
public:
    void eat() {
        cout << "Eating bread... \n";
    }
};

int main()
{
    Dog d = Dog();
    d.eat();
    return 0;
}
