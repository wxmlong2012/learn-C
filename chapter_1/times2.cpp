
#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter a numbers: ";

    int x{};
    std::cin >> x;

    std::cout << "Double that number equals: " << x * 2 << '\n';

    return 0;
}