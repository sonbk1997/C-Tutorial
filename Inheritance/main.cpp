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

/*
 * Multiple Inheritance
*/

class A1 {
protected:
    int a;
public:
    void set_a(int n) {
        a = n;
    }
};

class B1 {
protected:
    int b;
public:
    void set_b(int n) {
        b = n;
    }
};

class C1 : public A1, public B1 {
public:
    void display() {
        cout << "a: " << a << endl;
        cout << "b: " << b << endl;
        cout << "Additional: " << a + b << endl;
    }
};

/*
    Ambiquity Resolution in Inheritance
*/
class A2 {
public:
    void display() {
        cout << "Class A2" << endl;
    }
};

class B2 {
public:
    void display() {
        cout << "Class B2" << endl;
    }
};

class C2 : public A2, public B2 {
public:
    void view() {
        A2::display();
    }
};

/**C++ Hybrid Inheritance
 * Hybrid inheritance is a combination of more than one type of inheritance.
 *
*/

class A3 {
protected:
    int a;
public:
    void get_a() {
        a = 10;
    }
};

class B3 : public A3 {
protected:
    int b;
public:
    void get_b() {
        b = 20;
    }
};

class C3 {
protected:
    int c;
public:
    void get_c() {
        c = 30;
    }
};

class D3 : public B3, public C3 {
protected:
    int d;
public:
    void mul() {
        get_a();
        get_b();
        get_c();
        d = a*b*c;
        cout << d << endl;
    }
};

/*
 *  Hierarchical inheritance:
 *  Hierarchical inheritance is defined as the process of deriving more than one class from a base class.
*/
class Shape {
public:
    int a, b;
    void get_data(int n, int m) {
        a = n;
        b = m;
    }
};

class Rectangle : public Shape {
public:
    int rect_area() {
        int result = a*b;
        return result;
    }
};

class Triangle : public Shape {
public:
    int triangle_area() {
        float result = 0.5*a*b;
        return result;
    }
};

int main()
{
    Rectangle r;
    Triangle t;

    int length, breadth, base, height;
    std::cout << "Enter the length and breadth of a rectangle: " << std::endl;
    cin>>length>>breadth;
    r.get_data(length, breadth);
    int m = r.rect_area();
    cout << "Area of the rectangle is: " << m << endl;

    cout << "Enter the base, height of a triangle: " << endl;
    cin>>base>>height;
    t.get_data(base, height);
    float n = t.triangle_area();
    cout << "Area of the triangle is : " << n << endl;
    return 0;
}
