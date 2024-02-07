#include <iostream>

int main()
{

    // int x = 3.14;
    // std::cout<<x<<std::endl;      //prints 3 because it is an integer and the decimal part gets truncated to zero

    // double y = (int) 3.14;          //Casting from float to int
    // std::cout<<x<<std::endl;

    // char r = 100;
    // std::cout<<r<<std::endl;

    int correct = 8;
    int questions = 10;
    double score = correct / (double)questions * 100; // converting question variable to double  before division to avoid integer division
    std::cout << score << "%\n";

    return 0;
}