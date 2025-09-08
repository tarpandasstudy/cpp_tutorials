#include <iostream>
#include <functional> // Needed for std::function
using namespace std;

void callingLambdaFunction(function<void()> func) {
    // This is a function that takes another function as a parameter.
    func();
    func();
}
int main() {
    // Here, we understand about lambda functions in C++.

    /*
        Lambda is a small and anonymous function we can write in the code.
        It is useful when we need a function quickly without naming or declaring it.

        Syntax: [capture] (parameter) {code}
    */

    // 1. Basic Lambda use
    cout << "-> 1. Basic Lambda example" << endl;
    auto message = [](){cout << "Hello World!" << endl;};
    message();

    // 2. Lambda with parameters and return statement
    cout << "-> 2. Lambda function with parameters and return statement" << endl;
    auto addTwoNumbers = [](int a, int b){return a + b;};
    cout << "Sum of 42 and 53 is " << addTwoNumbers(42, 53) << endl;

    // 3. Using lambda function in another function
    cout << "-> 3. USing lambda function in another function" << endl;
    auto sayHello = [](){cout << "Hello User!\n";};
    callingLambdaFunction(sayHello);

    // 4. Using a lambda function in a loop.
    cout << "-> 4. Using lambda function in a loop" << endl;
    for(int i=1; i<=5; i++) {
        auto countToFive = [i](){
            cout << i << " ";
        };
        countToFive();
    }
    cout << endl;
    
    /*
        5. Capture clause

        We can give the lambda a value from outside the lambda function within the [].
        This is called a Capture clause.
    */

    // 5.1. Using a variable copy in the lambda function
    cout << "-> 5.1. Using a variable copy in the lambda function" << endl;
    int numRef1 = 12;
    auto printInteger1 = [numRef1](){
        cout << "Variable value copied within the lambda function: " << numRef1 << endl;
    };
    printInteger1();

    // 5.2. Using a variable reference in the lambda function
    cout << "-> 5.2. Using a variable reference in the lambda function" << endl;
    int numRef2 = 12;
    auto printInteger2 = [&numRef2](){
        cout << "Variable value referenced within the lambda function: " << numRef2 << endl;
        numRef2 = 21;
        cout << "Value changed: " << numRef2 << endl;
    };
    printInteger2();

    /*
    Both regular functions and lambda functions let's us group code and run it later, but they are used in slightly different situations.
    We use a regular function when:
        - We plan to reuse the function in multiple places
        - We want to give the function a clear, meaningful name
        - The logic is long or complex
    We use a lambda function when:
        - We only need the function once
        - The code is short and simple
        - We want to pass a quick function into another function
    */
    return 0;
}