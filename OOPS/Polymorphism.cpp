#include <iostream>

// Compile-time polymorphism: Function Overloading
class CompileTimePolymorphism {
public:
    void display() {
        std::cout << "Display with no parameters." << std::endl;
    }

    void display(int num) {
        std::cout << "Display with integer parameter: " << num << std::endl;
    }

    void display(double num) {
        std::cout << "Display with double parameter: " << num << std::endl;
    }
};

// Run-time polymorphism: Inheritance and Virtual Functions
class Base {
public:
    virtual void show() {
        std::cout << "Base class show function called." << std::endl;
    }

    virtual void print() {
        std::cout << "Base class print function called." << std::endl;
    }
};

class Derived : public Base {
public:
    void show() override {
        std::cout << "Derived class show function called." << std::endl;
    }

    void print() override {
        std::cout << "Derived class print function called." << std::endl;
    }
};

int main() {
    // Demonstrate compile-time polymorphism
    CompileTimePolymorphism obj;
    obj.display();
    obj.display(10);
    obj.display(10.5);

    // Demonstrate run-time polymorphism
    Base* basePtr;
    Derived derivedObj;
    basePtr = &derivedObj;

    basePtr->show(); // Calls Derived class show function
    basePtr->print(); // Calls Derived class print function

    return 0;
}

/*Compile-time Polymorphism (Function Overloading):

The CompileTimePolymorphism class demonstrates function overloading.
There are three display methods, each with different parameters (none, an integer, and a double).
Depending on the argument passed, the corresponding method is called.
Run-time Polymorphism (Inheritance and Virtual Functions):

The Base class has two virtual methods, show and print.
The Derived class inherits from Base and overrides these methods.
In the main function, a Base class pointer (basePtr) is assigned to the address of a Derived class object (derivedObj).
When basePtr->show() and basePtr->print() are called, the overridden methods in the Derived class are executed due to the virtual function mechanism.*/
