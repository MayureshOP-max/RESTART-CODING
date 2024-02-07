#include <iostream>
#include <istream>
#include <string>

int main()
{

    std::string name;
    int age;

    std::cout << "What is your name?" << '\n';
    // std:: cin>> name;
    std::getline(std::cin >> std::ws, name); // the getline function is added for  taking the  whole line as input including spaces.
    // This will not work because the input includes a space.
    // To fix this, we use >>std :: ws in front of cin

    std::cout << "What is your age?" << '\n';
    std::cin >> age;

    std ::cout << "Hello, " << name << "! How are you today?" << '\n';
    std::cout << "You are " << age << " years old." << '\n';

    return 0;
}