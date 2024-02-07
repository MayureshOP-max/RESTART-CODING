#include<iostream>

int main(){

    // int age;
    // std::cout<< "What is your age?  ";
    // std::cin>> age;

    // if (age>=18)
    // {
    //     std::cout<< "Welcome to the website!";
    // }
    // else if (age<18)
    // {
    //     std::cout<<"You are not old enough to enter the website!";
    // }
    

    char grade;
    std:: cout << "What is your Grade?";
    std::cin >> grade;

    if (grade= 'A' || grade == 'a'){
        std::cout << "Excellent Job!" ;
    }else if(grade=='B'|| grade=='b'){
        std::cout << "Good Job! Keep it up!";
    }else if(grade=='C'|| grade=='c'){
        std::cout << "Not Bad, but could be better.";
    }else if((grade >= 'D') && (grade <= 'F') || (grade >= 'd') && (grade <= 'f')){
        std::cout << "Better Try Again Next Time.";
    }else{
        std::cout << "Invalid Entry. Please Enter A or B or C or D or F.";
    }

    return 0;
}