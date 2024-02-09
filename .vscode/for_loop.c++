#include<iostream>

int main()
{
    std::cout<<"increasing\n" ;
    for (int i = 0; i <=10 ; i++)
    {
        std::cout<<i<<'\n';
    }
    
    std::cout<<"decreasing\n";
    for (int i = 10; i >=0 ; i--)
    {
        std::cout<<i<<'\n';
    }
    
    return 0;
}