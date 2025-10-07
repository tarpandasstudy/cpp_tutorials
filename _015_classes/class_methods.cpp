#include <iostream>
using namespace std;

class myClass1 {
    public:
        // Method/function definition inside the class
        void printHello() {
            cout << "Hi World!" << endl;
        }
};
class myClass2 {
    public:
        void printHello();
};

// Method/function definition outside the class
void myClass2::printHello(){
    cout << "Hello World!" << endl;
}
int main() {
    // "Here, we understand about Methods in classes."
    
    /*
    Methods are functions which are present in the class.

    Methods can be of two types:
    1. Inside class definition
    2. Outside class definition
    */
    myClass1 obj1;
    obj1.printHello();

    myClass2 obj2;
    obj2.printHello();

    return 0;
}