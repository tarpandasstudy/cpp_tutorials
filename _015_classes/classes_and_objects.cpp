#include <iostream>
using namespace std;

// 1.1. Creating a class
class student{      // The class
    public:         // Access specifier
        int id;     // Attribute (int variable)
        string name;// Attribute (string variable)
};
int main() {
    // Here, we undestand about classes and objects.

    /*
    - Everything in C++ is associated with classes and objects, along with its attributes and methods.
    - Attributes and methods are basically variables and functions that belong to the class.
        They are often referred to as 'class members'.
    - A class is a user-defined datatype that we can use in our programs, and it works as an object contructor, or a 'blueprint' for creating objects.
    */

    // 1.2. Create two objects (using the class created)
    student student1, student2;

    student1.id = 100;
    student1.name = "Arun";

    student2.id = 101;
    student2.name = "Mani";

    cout << student1.id << ", " << student1.name << endl;
    cout << student2.id << ", " << student2.name << endl;

    return 0;
}