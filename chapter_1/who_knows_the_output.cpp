#include <iostream>

// This program demonstrates the use of an uninitialized variable
void doNothing(int&) {} // this function does nothing, and takes a reference to an int as an argument, 
// so that it will not cause error during compilation

int main()
{
    
    // define an integer variable named x
    int x; // this variable is uninitialized because we haven't given it a value
    doNothing(x); // call the function doNothing with x as an argument
    // print the value of x to the screen
    std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized

    return 0;
}