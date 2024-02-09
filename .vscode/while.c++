#include <string>
#include<iostream>

int main()
{
    int i=1;
    // while(i < 1){
    //     std:: cout << "Hello In tha loop!";
    // }

    // std:: string name;
    // while (name.empty())
    // {
    //     std::cout<<"Enter your name: ";
    //     std::getline(std::cin, name);
    // }
    // std::cout<<"Hello "<<name;

    // do
    // {
    //     std:: cout << "Hello In tha loop!";
    // } while (i<1);

    int number;
    do
    {
        std :: cout<< "Enter a # : ";
        std:: cin>> number;
    } while (number<0);
    std:: cout<<"The # is: "<<number;
    
    return 0;
}