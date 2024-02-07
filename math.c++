#include <iostream>
#include <cmath>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter side a:\n";
    std::cin >> a;

    std::cout << "Enter side b:\n";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "side C:\n"
              << c;

    return 0;
}