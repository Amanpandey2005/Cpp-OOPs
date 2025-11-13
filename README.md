🧠 Unit I — Object-Oriented Programming Fundamentals in C++

Welcome to Unit I of the Object-Oriented Programming (OOP) using C++ repository.
This unit introduces the core principles of OOP, the structure of C++ programs, and the fundamental programming concepts that form the basis for advanced C++ topics.

📘 1. Object-Oriented Programming Paradigm

Definition:
The Object-Oriented Programming (OOP) paradigm organizes software around objects rather than functions or logic. Each object represents a real-world entity that has data (attributes) and behaviors (methods). OOP focuses on reusability, modularity, and abstraction. It contrasts with the procedural paradigm, where the emphasis is on functions and procedures.

Example:

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    void start() {
        cout << brand << " car started." << endl;
    }
};

int main() {
    Car c1;
    c1.brand = "Tesla";
    c1.start();
    return 0;
}

📘 2. Basic Concepts of Object-Oriented Programming

Definition:
OOP is built upon key concepts: Classes, Objects, Encapsulation, Abstraction, Inheritance, and Polymorphism.

Class: Blueprint of objects.

Object: Instance of a class.

Encapsulation: Binding data and functions together.

Abstraction: Hiding complex details.

Inheritance: Reusing properties of existing classes.

Polymorphism: Using one interface for different data types.

Example:

#include <iostream>
using namespace std;

class Animal {
public:
    void sound() { cout << "Animals make sounds" << endl; }
};
class Dog : public Animal {
public:
    void sound() { cout << "Dog barks" << endl; }
};

int main() {
    Dog d;
    d.sound();
    return 0;
}

📘 3. Benefits of Object-Oriented Programming

Definition:
OOP improves code reusability, modularity, data security, and scalability. It allows developers to model complex systems easily, maintain large projects, and minimize redundancy through inheritance and polymorphism.

Example:

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() = 0; // Abstract method
};

class Circle : public Shape {
public:
    void area() override { cout << "Area of Circle = πr²" << endl; }
};

int main() {
    Circle c;
    c.area();
    return 0;
}

📘 4. Object-Oriented Languages

Definition:
Languages that support OOP features (class, object, inheritance, polymorphism, etc.) are called object-oriented languages. Examples include C++, Java, Python, C#, and Ruby. C++ is a hybrid language supporting both procedural and object-oriented paradigms.

Example:

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int roll;
    void display() { cout << name << " - " << roll << endl; }
};

int main() {
    Student s1 = {"Aman", 101};
    s1.display();
    return 0;
}

📘 5. Applications of Object-Oriented Programming

Definition:
OOP is widely used in software engineering for simulation, GUI applications, game development, web frameworks, and large system design. It simplifies complex problem solving by representing real-world entities as objects.

Example:

#include <iostream>
using namespace std;

class Account {
    double balance;
public:
    Account(double b) : balance(b) {}
    void deposit(double amt) { balance += amt; }
    void showBalance() { cout << "Balance: " << balance << endl; }
};

int main() {
    Account acc(1000);
    acc.deposit(500);
    acc.showBalance();
    return 0;
}

📘 6. C++ Programming Language

Definition:
C++ is a general-purpose, object-oriented programming language developed by Bjarne Stroustrup. It supports low-level memory manipulation, procedural programming, and OOP. C++ enhances C by introducing classes, objects, and templates.

Example:

#include <iostream>
using namespace std;

int main() {
    cout << "Welcome to C++ Programming!" << endl;
    return 0;
}

📘 7. Tokens

Definition:
Tokens are the smallest individual units of a C++ program. They include keywords, identifiers, constants, strings, operators, and punctuators. The compiler breaks the source code into tokens during compilation.

Example:

// Tokens: int, main, (, ), {, return, 0, ;, }
int main() {
    return 0;
}

📘 8. Keywords

Definition:
Keywords are reserved words with predefined meanings in C++. They cannot be used as identifiers (e.g., int, class, if, return, etc.). C++ has more than 60 keywords.

Example:

#include <iostream>
using namespace std;

int main() {
    int number = 10; // 'int' is a keyword
    cout << number;
    return 0;
}

📘 9. Identifiers and Constants

Definition:
Identifiers are names given to variables, functions, and classes.
Constants are fixed values that do not change during program execution.
Identifiers follow naming rules (no special symbols except _).

Example:

#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    double radius = 5;
    cout << "Area: " << PI * radius * radius;
    return 0;
}

📘 10. Data Types

Definition:
Data types define the type and size of data a variable can store. C++ has primitive types (int, float, char, bool) and derived types (array, pointer, function). It also supports user-defined types (class, struct, enum).

Example:

#include <iostream>
using namespace std;

int main() {
    int age = 21;
    float height = 5.8;
    char grade = 'A';
    bool pass = true;

    cout << "Age: " << age << ", Height: " << height << ", Grade: " << grade;
    return 0;
}

📘 11. Type Compatibility

Definition:
Type compatibility ensures that values assigned between variables are of compatible data types. Implicit conversions may occur if compatible, while explicit type casting is used for incompatible types.

Example:

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    double b = 2.5;
    double result = a + b; // int converted to double
    cout << "Result: " << result;
    return 0;
}

📘 12. Variables

Definition:
A variable is a named memory location used to store data. It must be declared before use. C++ supports local, global, and static variables.

Example:

#include <iostream>
using namespace std;

int main() {
    int score = 90; // variable declaration and initialization
    cout << "Score: " << score;
    return 0;
}

📘 13. Operators in C++

Definition:
Operators are symbols that perform operations on operands.
Types include:

Arithmetic (+, -, *, /)

Relational (>, <, ==)

Logical (&&, ||, !)

Assignment (=, +=)

Bitwise (&, |, ^)

Example:

#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    cout << "Sum: " << a + b << endl;
    cout << "AND: " << (a & b);
    return 0;
}

📘 14. Implicit Type Conversions

Definition:
Implicit conversion (type promotion) automatically converts one data type to another when required. It avoids data loss and ensures compatibility.

Example:

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    double y = 2.5;
    double result = x + y; // int -> double
    cout << "Result: " << result;
    return 0;
}

📘 15. Operator Precedence

Definition:
Operator precedence determines the order in which operations are performed in an expression. Operators with higher precedence execute first.
For example: * has higher precedence than +.

Example:

#include <iostream>
using namespace std;

int main() {
    int result = 10 + 5 * 2; // * executes first
    cout << "Result: " << result;
    return 0;
}

📘 16. The Main Function

Definition:
main() is the entry point of every C++ program. Execution starts and ends here. It returns an integer to the OS (0 = success).

Example:

#include <iostream>
using namespace std;

int main() {
    cout << "Program starts here!";
    return 0;
}

📘 17. Function Prototyping

Definition:
A function prototype declares a function before its actual definition, informing the compiler about return type, name, and parameters.

Example:

#include <iostream>
using namespace std;

void greet(); // Prototype

int main() {
    greet();
    return 0;
}

void greet() {
    cout << "Hello, World!";
}

📘 18. Call by Reference

Definition:
In call by reference, function parameters refer to the actual memory locations of arguments. Changes made inside the function affect the original variables.

Example:

#include <iostream>
using namespace std;

void swap(int &a, int &b) {
    int temp = a; a = b; b = temp;
}

int main() {
    int x = 5, y = 10;
    swap(x, y);
    cout << "x=" << x << ", y=" << y;
}

📘 19. Return by Reference

Definition:
A function can return a reference to a variable, allowing direct modification of the returned variable.

Example:

#include <iostream>
using namespace std;

int& getValue(int &x) {
    return x;
}

int main() {
    int num = 5;
    getValue(num) = 20; // modifies num
    cout << num;
}

📘 20. Inline Functions

Definition:
Inline functions expand their code directly at the call site, reducing function call overhead. Useful for short, frequently called functions.

Example:

#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square: " << square(5);
}

📘 21. Function Overloading

Definition:
Function overloading allows multiple functions with the same name but different parameter lists. It provides flexibility and readability.

Example:

#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
double add(double a, double b) { return a + b; }

int main() {
    cout << add(5, 3) << endl;
    cout << add(2.5, 4.1);
}

📘 22. Friend Functions

Definition:
A friend function is not a member of a class but can access its private and protected data. It enhances controlled access between classes.

Example:

#include <iostream>
using namespace std;

class Box {
    double width;
public:
    Box() : width(5) {}
    friend void showWidth(Box);
};

void showWidth(Box b) {
    cout << "Width: " << b.width;
}

int main() {
    Box b;
    showWidth(b);
}

📘 23. Default Parameter Value

Definition:
C++ allows assigning default values to function parameters, which are used when no argument is passed.

Example:

#include <iostream>
using namespace std;

void display(string name = "User") {
    cout << "Hello, " << name << "!";
}

int main() {
    display();
    display("Aman");
}

Unit - 2 

🧩 Unit II — Classes, Objects & Constructors in C++

This unit focuses on how data and functions are combined into classes and objects, along with encapsulation, information hiding, and memory management techniques such as constructors, destructors, and dynamic allocation.

📘 1. Specifying a Class

Definition:
A class in C++ is a user-defined data type that acts as a blueprint for creating objects. It groups related data and functions under one name. Class members can be private, protected, or public. The class is defined using the keyword class, followed by member variables and methods. Only public members are accessible outside the class.

Example:

#include <iostream>
using namespace std;

class Student {
private:
    int roll;
    string name;
public:
    void setData(int r, string n) {
        roll = r; name = n;
    }
    void showData() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
    }
};

int main() {
    Student s1;
    s1.setData(101, "Aman");
    s1.showData();
}

📘 2. Member Functions

Definition:
Member functions are the functions declared inside a class that define the behavior of its objects. They can access both public and private members of the class. Member functions can be defined inside or outside the class using the scope resolution operator (::).

Example:

#include <iostream>
using namespace std;

class Rectangle {
    int length, width;
public:
    void setData(int l, int w);
    int area();
};

void Rectangle::setData(int l, int w) {
    length = l; width = w;
}
int Rectangle::area() {
    return length * width;
}

int main() {
    Rectangle r;
    r.setData(10, 5);
    cout << "Area: " << r.area();
}

📘 3. Encapsulation

Definition:
Encapsulation is the process of binding data and methods into a single unit (class) and restricting access to internal details. It ensures data security by exposing only necessary functions through public interfaces while keeping data private.

Example:

#include <iostream>
using namespace std;

class Account {
private:
    double balance;
public:
    void deposit(double amt) { balance += amt; }
    double getBalance() { return balance; }
};

int main() {
    Account acc;
    acc.deposit(500);
    cout << "Balance: " << acc.getBalance();
}

📘 4. Information Hiding

Definition:
Information hiding means restricting direct access to class members and providing controlled interfaces to manipulate data. It prevents unintended interference and misuse of internal data.

Example:

#include <iostream>
using namespace std;

class Bank {
private:
    double balance;
public:
    void setBalance(double b) {
        if (b > 0) balance = b;
    }
    double getBalance() { return balance; }
};

int main() {
    Bank b;
    b.setBalance(1000);
    cout << "Balance: " << b.getBalance();
}

📘 5. Abstract Data Types (ADT)

Definition:
An Abstract Data Type (ADT) is a model for data types where only behavior is defined, not implementation. In C++, classes represent ADTs because they define operations (methods) while hiding implementation details.

Example:

#include <iostream>
using namespace std;

class Stack {
private:
    int arr[5], top = -1;
public:
    void push(int x) { if (top < 4) arr[++top] = x; }
    int pop() { return (top >= 0) ? arr[top--] : -1; }
};

int main() {
    Stack s;
    s.push(10); s.push(20);
    cout << s.pop();
}

📘 6. Objects & Classes

Definition:
A class is a template, and objects are its instances. Objects have unique data but share the class structure. Multiple objects can be created from one class to model real-world entities.

Example:

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int speed;
    void display() { cout << brand << " runs at " << speed << " km/h\n"; }
};

int main() {
    Car c1 = {"Tesla", 200};
    Car c2 = {"BMW", 180};
    c1.display();
    c2.display();
}

📘 7. Static Member Functions

Definition:
A static member is shared among all objects of a class. A static member function can access only static data. It is used for maintaining class-wide information.

Example:

#include <iostream>
using namespace std;

class Counter {
    static int count;
public:
    Counter() { count++; }
    static void showCount() { cout << "Objects: " << count << endl; }
};

int Counter::count = 0;

int main() {
    Counter a, b, c;
    Counter::showCount();
}

📘 8. Arrays of Objects

Definition:
An array of objects allows storage of multiple instances of a class. This is useful for handling lists or collections of objects.

Example:

#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int marks;
};

int main() {
    Student s[3] = {{"Aman", 90}, {"Riya", 85}, {"Arjun", 80}};
    for (int i = 0; i < 3; i++)
        cout << s[i].name << ": " << s[i].marks << endl;
}

📘 9. Constructors & Destructors

Definition:
A constructor is a special function that automatically initializes objects when created. A destructor is called when an object goes out of scope to free resources.
Constructors have the same name as the class; destructors begin with ~.

Example:

#include <iostream>
using namespace std;

class Demo {
public:
    Demo() { cout << "Constructor called\n"; }
    ~Demo() { cout << "Destructor called\n"; }
};

int main() {
    Demo d1;
}

📘 10. Parameterized Constructors

Definition:
Parameterized constructors accept arguments to initialize data members when objects are created. They enable flexible object initialization.

Example:

#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b) { x = a; y = b; }
    void display() { cout << "(" << x << "," << y << ")"; }
};

int main() {
    Point p1(3, 5);
    p1.display();
}

📘 11. Copy Constructors

Definition:
A copy constructor creates a new object as a copy of an existing object. It is invoked when an object is passed by value or returned from a function.

Example:

#include <iostream>
using namespace std;

class Box {
    int length;
public:
    Box(int l) { length = l; }
    Box(const Box &b) { length = b.length; }
    void show() { cout << "Length: " << length; }
};

int main() {
    Box b1(10);
    Box b2 = b1;
    b2.show();
}

📘 12. Dynamic Constructors

Definition:
Dynamic constructors allocate memory dynamically using new inside the constructor. Useful when the object size is not known beforehand.

Example:

#include <iostream>
using namespace std;

class String {
    char* name;
public:
    String(const char* s) {
        name = new char[strlen(s) + 1];
        strcpy(name, s);
    }
    void show() { cout << name; }
    ~String() { delete[] name; }
};

int main() {
    String s1("C++");
    s1.show();
}

📘 13. Destructors

Definition:
A destructor is a special function called automatically when an object is destroyed. It releases allocated memory or closes resources. It has the same name as the class, prefixed with ~.

Example:

#include <iostream>
using namespace std;

class Temp {
public:
    Temp() { cout << "Object created\n"; }
    ~Temp() { cout << "Object destroyed\n"; }
};

int main() {
    Temp t1;
}

📘 14. Identity and Behaviour of an Object

Definition:
Every object has:

Identity: Unique memory address.

State: Values of its attributes.

Behavior: Methods it can perform.

Example:

#include <iostream>
using namespace std;

class Dog {
public:
    string name;
    void bark() { cout << name << " is barking\n"; }
};

int main() {
    Dog d1; d1.name = "Bruno";
    cout << &d1 << endl; // Identity (address)
    d1.bark();            // Behaviour
}

📘 15. C++ Garbage Collection

Definition:
C++ does not have automatic garbage collection like Java. Developers manually free memory using delete. Proper memory management avoids leaks.

Example:

#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(5);
    cout << *ptr;
    delete ptr; // manual garbage collection
}

📘 16. Dynamic Memory Allocation

Definition:
Dynamic memory is allocated at runtime using new and released using delete. This allows flexible and efficient memory use.

Example:

#include <iostream>
using namespace std;

int main() {
    int* arr = new int[3];
    arr[0] = 10; arr[1] = 20; arr[2] = 30;
    for (int i = 0; i < 3; i++) cout << arr[i] << " ";
    delete[] arr;
}

📘 17. Explicit Type Conversions

Definition:
Explicit type conversion (casting) manually converts one data type to another using syntax like (type)variable. It gives full control to the programmer.

Example:

#include <iostream>
using namespace std;

int main() {
    double x = 7.8;
    int y = (int)x; // explicit cast
    cout << y;
}

📘 18. Operator Overloading

Definition:
Operator overloading allows defining custom meanings for operators when used with user-defined types (like classes). It enhances code readability.

Example:

#include <iostream>
using namespace std;

class Complex {
    int r, i;
public:
    Complex(int a, int b) { r = a; i = b; }
    Complex operator + (Complex c) {
        return Complex(r + c.r, i + c.i);
    }
    void show() { cout << r << " + " << i << "i"; }
};

int main() {
    Complex c1(3, 4), c2(2, 5);
    Complex c3 = c1 + c2;
    c3.show();
}

Unit - 3

🧩 UNIT – III: Inheritance and Polymorphism in C++
1️⃣ Inheritance

Definition:
Inheritance allows a class (child/derived class) to acquire the properties and behaviors (data and functions) of another class (parent/base class). It supports code reusability and hierarchical classification.

Example:

#include <iostream>
using namespace std;

class Animal {
public:
    void eat() { cout << "Eating..." << endl; }
};

class Dog : public Animal {
public:
    void bark() { cout << "Barking..." << endl; }
};

int main() {
    Dog d;
    d.eat();  // Inherited from Animal
    d.bark();
}

2️⃣ Inheritance Methods

Types of Inheritance in C++:

Single Inheritance: One base → one derived

Multiple Inheritance: Multiple bases → one derived

Multilevel Inheritance: Derived class acts as base for another

Hierarchical Inheritance: One base → multiple derived

Hybrid Inheritance: Combination of types

3️⃣ Class Hierarchy

Definition:
A class hierarchy defines relationships between base and derived classes, forming a structured inheritance tree.

Example:

class LivingBeing { };
class Animal : public LivingBeing { };
class Bird : public Animal { };

4️⃣ Derivation – Public, Private & Protected

Definition:
The access specifier determines how base class members are inherited:

public: public → public, protected → protected

protected: public → protected, protected → protected

private: all become private

Example:

#include <iostream>
using namespace std;

class Base {
public:
    int a;
protected:
    int b;
private:
    int c;
};

class Derived : public Base {
public:
    void show() {
        a = 10; // accessible
        b = 20; // accessible (protected)
        // c = 30; // not accessible
        cout << a << " " << b;
    }
};

int main() {
    Derived d;
    d.show();
}

5️⃣ Aggregation

Definition:
Aggregation represents a “has-a” relationship where one class contains another class object but both can exist independently.

Example:

#include <iostream>
using namespace std;

class Engine {
public:
    void start() { cout << "Engine Started!\n"; }
};

class Car {
    Engine eng;
public:
    void run() { eng.start(); cout << "Car Running...\n"; }
};

int main() {
    Car c;
    c.run();
}

6️⃣ Inheritance Constructors

Definition:
Constructors of base classes are invoked before those of derived classes during object creation.

Example:

#include <iostream>
using namespace std;

class Base {
public:
    Base() { cout << "Base Constructor\n"; }
};

class Derived : public Base {
public:
    Derived() { cout << "Derived Constructor\n"; }
};

int main() {
    Derived d;
}

7️⃣ Composition vs Classification Hierarchies

Composition: “Has-a” relationship (e.g., Car has an Engine).
Classification: “Is-a” relationship (e.g., Dog is an Animal).

8️⃣ Containership

Definition:
Containership (object composition) means one class contains objects of another class as its members.

Example:

class Wheel {
public:
    void rotate() { cout << "Wheel Rotating\n"; }
};

class Bike {
    Wheel w;
public:
    void move() { w.rotate(); cout << "Bike Moving\n"; }
};

9️⃣ Initialization List

Definition:
Used in constructors to initialize data members before entering the constructor body.

Example:

#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    Point(int a, int b) : x(a), y(b) {
        cout << "x=" << x << " y=" << y;
    }
};

🔟 Polymorphism

Definition:
Polymorphism means “many forms.” It allows one interface to be used for different underlying data types or operations.
Types: Compile-time and Run-time polymorphism.

11️⃣ Categorization of Polymorphic Techniques

Compile-Time: Function Overloading, Operator Overloading

Run-Time: Virtual Functions, Function Overriding

12️⃣ Polymorphism by Parameter

Definition:
Polymorphism achieved by passing parameters of different types or numbers (function overloading).

Example:

#include <iostream>
using namespace std;

void area(int r) { cout << "Circle Area = " << 3.14 * r * r << endl; }
void area(int l, int b) { cout << "Rectangle Area = " << l * b << endl; }

int main() {
    area(5);
    area(4, 6);
}

13️⃣ Parametric Polymorphism

Definition:
Achieved through templates, allowing functions or classes to work with any data type.

Example:

#include <iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add<int>(3, 4) << endl;
    cout << add<double>(2.5, 3.5);
}

14️⃣ Generic Function – Template Function

Definition:
A generic function is a function template that can operate on any data type.

(See above example — same code.)

15️⃣ Function Overriding

Definition:
When a derived class redefines a base class function with the same name and signature.

Example:

#include <iostream>
using namespace std;

class Base {
public:
    virtual void display() { cout << "Base Display\n"; }
};

class Derived : public Base {
public:
    void display() override { cout << "Derived Display\n"; }
};

int main() {
    Base *b = new Derived();
    b->display();
}

16️⃣ Run-Time Polymorphism

Definition:
Achieved through virtual functions and base class pointers at runtime.

Example:

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() { cout << "Drawing Shape\n"; }
};

class Circle : public Shape {
public:
    void draw() override { cout << "Drawing Circle\n"; }
};

int main() {
    Shape *s = new Circle();
    s->draw();
}

17️⃣ Virtual Functions

Definition:
A function declared with the keyword virtual in the base class allows run-time polymorphism.

Example:

#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() { cout << "Animal Sound\n"; }
};

class Dog : public Animal {
public:
    void sound() override { cout << "Dog Barks\n"; }
};

int main() {
    Animal *a = new Dog();
    a->sound();
}

Unit - 4

🧠 UNIT – IV: Advanced C++ Concepts – STL, Streams, Namespaces & Exception Handling
1️⃣ Standard C++ Classes

Definition:
Standard C++ classes are built-in library classes that simplify common programming tasks. They include classes for input/output (iostream), string handling (string), file operations (fstream), and data structures (vector, map, etc.).

Example:

#include <iostream>
#include <string>
using namespace std;

int main() {
    string name = "Aman";
    cout << "Hello, " << name << "!" << endl;
    return 0;
}

2️⃣ Using Multiple Inheritance

Definition:
Multiple inheritance allows a class to inherit features from more than one base class. It helps in combining functionalities but may cause ambiguity issues (solved using scope resolution).

Example:

#include <iostream>
using namespace std;

class A {
public:
    void showA() { cout << "Class A" << endl; }
};

class B {
public:
    void showB() { cout << "Class B" << endl; }
};

class C : public A, public B {
public:
    void showC() { cout << "Class C inherits A and B" << endl; }
};

int main() {
    C obj;
    obj.showA();
    obj.showB();
    obj.showC();
}

3️⃣ Streams and Files

Definition:
Streams are objects used to perform input and output operations. C++ supports:

cin (standard input)

cout (standard output)

ifstream (file input)

ofstream (file output)

Example:

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("data.txt");
    file << "Hello, File Handling in C++!" << endl;
    file.close();

    string line;
    ifstream readFile("data.txt");
    while (getline(readFile, line)) cout << line << endl;
}

4️⃣ Namespaces

Definition:
Namespaces prevent name conflicts by grouping related identifiers under a unique name.

Example:

#include <iostream>
using namespace std;

namespace School {
    void info() { cout << "Namespace Example: School" << endl; }
}

int main() {
    School::info();
}

5️⃣ Exception Handling

Definition:
Exception handling deals with runtime errors using try, catch, and throw.
It ensures program stability by handling unexpected situations gracefully.

Example:

#include <iostream>
using namespace std;

int main() {
    try {
        int a, b;
        cout << "Enter two numbers: ";
        cin >> a >> b;
        if (b == 0)
            throw runtime_error("Division by zero not allowed!");
        cout << "Result: " << a / b;
    } catch (exception &e) {
        cout << "Error: " << e.what();
    }
}

6️⃣ Generic Classes

Definition:
Generic classes use templates to allow data structures to work with any data type.

Example:

#include <iostream>
using namespace std;

template <class T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    void display() { cout << "Value: " << value << endl; }
};

int main() {
    Box<int> intBox(10);
    Box<string> strBox("Template Class");
    intBox.display();
    strBox.display();
}

7️⃣ Overview of Standard Template Library (STL)

Definition:
The STL is a collection of C++ template classes providing data structures and algorithms such as:

Containers: vector, list, map, set

Algorithms: sort(), find(), count()

Iterators: for accessing elements

Allocators: for memory management

8️⃣ Iterators and Allocators

Iterators:
Act like pointers to access elements in STL containers.
Allocators:
Handle dynamic memory allocation for containers.

Example:

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
}

9️⃣ Strings

Definition:
The string class in C++ provides a convenient way to handle sequences of characters.

Example:

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1 = "C++ ";
    string s2 = "Programming";
    string result = s1 + s2;
    cout << "Concatenated String: " << result;
}

🔟 Streams and Manipulators

Definition:
Manipulators are used to format the output of streams. Common manipulators:
endl, setw(), setprecision(), fixed, left, right.

Example:

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.1415926535;
    cout << "Default: " << pi << endl;
    cout << "Fixed: " << fixed << setprecision(3) << pi << endl;
}

11️⃣ User Defined Manipulators

Definition:
Users can define custom manipulators for repeated formatting or behavior in output streams.

Example:

#include <iostream>
using namespace std;

ostream& stars(ostream& output) {
    output << "*****";
    return output;
}

int main() {
    cout << stars << " Custom Manipulator Example " << stars;
}

12️⃣ Vectors

Definition:
vector is a dynamic array in C++ that can grow or shrink in size automatically. It supports random access and STL operations.

Example:

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {10, 20, 30};
    nums.push_back(40);
    for (int n : nums)
        cout << n << " ";
}
