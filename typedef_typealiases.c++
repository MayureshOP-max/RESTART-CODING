#include <iostream>

// typedef std::string text_t;   //typedef
// typedef int number_t;

using text_t = std::string; // type aliases
using number_t = int;

int main()
{
    text_t greeting = "Hello There";
    number_t num1 = 5;
    std::cout << greeting << '\n';
    std::cout << num1 << '\n';
}