#include <iostream>

int main() {
    // std::cout << "Hello, World!" << std::endl;

    int a {5};

    double b {5.0};

    char c {'H'};

    const char* d {"Hello, World!"};
    
    std::cout << "Enter a number: ";
    int x {};
    std::cin >> x;
    std::cout << "You entered " << x << '\n';

    std::cout << "Enter two numbers separated by a space: ";

    int x1{}; // define variable x to hold user input (and value-initialize it)
    int y1{}; // define variable y to hold user input (and value-initialize it)
    std::cin >> x1 >> y1; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x1 << " and " << y1 << '\n';

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << c << "\n";
    std::cout << d << "\n";
    std::cout << "Hello" << "_" << "Wrold!" << "\n";
    std::cout << x << "\n";
    return 0;
}
//