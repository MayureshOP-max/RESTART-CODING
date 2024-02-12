#include<iostream>

void happyBirthday(std::string name, int age);


int main()
{
    std:: string name = "GREEED";
    int age = 21;
    happyBirthday(name, age);
    
    return 0;
}

void happyBirthday(std::string name,int age)
{
    std :: cout<<"Happy birthday to you!"<<name<<'\n';
    std :: cout<<"Happy birthday to you!"<<name<<'\n';
    std :: cout<<"Happy birthday dear you!"<<name<<'\n';
    std :: cout<<"Happy birthday to you!"<<name<<'\n';
    std::cout<<"I hope your day is as sweet as a "<<age<<" year old's."<<'\n';
}