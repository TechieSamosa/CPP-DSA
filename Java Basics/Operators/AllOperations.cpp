#include <iostream>
using namespace std;

int main() {
    // Arithmetic operators
    int a = 10, b = 5;
    cout << "Arithmetic Operators:" << endl;
    cout << "Addition: " << a + b << endl;         // Addition
    cout << "Subtraction: " << a - b << endl;      // Subtraction
    cout << "Multiplication: " << a * b << endl;   // Multiplication
    cout << "Division: " << a / b << endl;         // Division
    cout << "Modulus: " << a % b << endl << endl;  // Modulus

    // Relational operators
    cout << "Relational Operators:" << endl;
    cout << "Equal to: " << (a == b) << endl;            // Equal to
    cout << "Not equal to: " << (a != b) << endl;        // Not equal to
    cout << "Greater than: " << (a > b) << endl;         // Greater than
    cout << "Less than: " << (a < b) << endl;            // Less than
    cout << "Greater than or equal to: " << (a >= b) << endl;  // Greater than or equal to
    cout << "Less than or equal to: " << (a <= b) << endl << endl; // Less than or equal to

    // Logical operators
    bool x = true, y = false;
    cout << "Logical Operators:" << endl;
    cout << "Logical AND: " << (x && y) << endl;        // Logical AND
    cout << "Logical OR: " << (x || y) << endl;         // Logical OR
    cout << "Logical NOT for x: " << (!x) << endl;      // Logical NOT

    // Bitwise operators
    int c = 5, d = 9;
    cout << "Bitwise Operators:" << endl;
    cout << "Bitwise AND: " << (c & d) << endl;         // Bitwise AND
    cout << "Bitwise OR: " << (c | d) << endl;          // Bitwise OR
    cout << "Bitwise XOR: " << (c ^ d) << endl;         // Bitwise XOR
    cout << "Bitwise NOT for c: " << (~c) << endl;      // Bitwise NOT
    cout << "Bitwise left shift: " << (c << 1) << endl; // Bitwise left shift
    cout << "Bitwise right shift: " << (d >> 1) << endl << endl; // Bitwise right shift

    // Assignment operators
    cout << "Assignment Operators:" << endl;
    int e = 10;
    e += 5;    // e = e + 5
    cout << "e += 5: " << e << endl;
    e -= 5;    // e = e - 5
    cout << "e -= 5: " << e << endl;
    e *= 5;    // e = e * 5
    cout << "e *= 5: " << e << endl;
    e /= 5;    // e = e / 5
    cout << "e /= 5: " << e << endl;
    e %= 5;    // e = e % 5
    cout << "e %= 5: " << e << endl;
    e &= 5;    // e = e & 5
    cout << "e &= 5: " << e << endl;
    e |= 5;    // e = e | 5
    cout << "e |= 5: " << e << endl;
    e ^= 5;    // e = e ^ 5
    cout << "e ^= 5: " << e << endl;
    e <<= 1;   // e = e << 1
    cout << "e <<= 1: " << e << endl;
    e >>= 1;   // e = e >> 1
    cout << "e >>= 1: " << e << endl << endl;

    // Increment and Decrement operators
    cout << "Increment and Decrement Operators:" << endl;
    int f = 5;
    cout << "f: " << f << endl;
    cout << "Post-increment: " << f++ << endl;  // Post-increment
    cout << "After post-increment, f: " << f << endl;
    cout << "Pre-increment: " << ++f << endl;   // Pre-increment
    cout << "After pre-increment, f: " << f << endl;
    cout << "Post-decrement: " << f-- << endl;  // Post-decrement
    cout << "After post-decrement, f: " << f << endl;
    cout << "Pre-decrement: " << --f << endl;   // Pre-decrement
    cout << "After pre-decrement, f: " << f << endl << endl;

    // Conditional (Ternary) Operator
    cout << "Conditional Operator:" << endl;
    int g = 10, h = 5;
    int max = (g > h) ? g : h; // If g is greater than h, max is assigned g; otherwise, max is assigned h.
    cout << "Max between g and h is: " << max << endl << endl;

    // sizeof Operator
    cout << "sizeof Operator:" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;  // Size of int
    cout << "Size of float: " << sizeof(float) << " bytes" << endl; // Size of float
    cout << "Size of char: " << sizeof(char) << " byte" << endl;    // Size of char
    cout << "Size of double: " << sizeof(double) << " bytes" << endl << endl; // Size of double

    // Comma Operator
    cout << "Comma Operator:" << endl;
    int i = (cout << "Hello, "), j = (cout << "world!");
    cout << endl << endl;

    // Member access operator (.)
    struct Person {
        string name;
        int age;
    };
    Person person;
    person.name = "Alice";
    person.age = 30;
    cout << "Member access operator:" << endl;
    cout << "Name: " << person.name << ", Age: " << person.age << endl << endl;

    // Pointer operator (*) and Address-of operator (&)
    int num = 10;
    int *ptr = &num;
    cout << "Pointer and Address-of Operator:" << endl;
    cout << "Value of num: " << num << endl;        // Value of num
    cout << "Address of num: " << &num << endl;      // Address of num
    cout << "Value at ptr: " << *ptr << endl;        // Value at ptr
    cout << "Address in ptr: " << ptr << endl;       // Address in ptr
    cout << "Address of ptr: " << &ptr << endl << endl; // Address of ptr

    // Conditional Operator
    cout << "Conditional Operator:" << endl;
    int k = 10, l = 5;
    int min = (k < l) ? k : l; // If k is less than l, min is assigned k; otherwise, min is assigned l.
    cout << "Min between k and l is: " << min << endl;

    return 0;
}
