#include<iostream>
#include<ctime>

int main()
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch (randNum)
    {
    case 1:std :: cout<< "You win a burger!\n";
        break;
    case 2:std :: cout<< "You win a car!\n";
        break;
    case 3:std :: cout<< "You win a house!\n";
        break;
    case 4:std :: cout<< "You win a russian hoe!\n";
        break;
    case 5:std :: cout<< "You win a dumbell!\n";
        break;
    
    default:std::cout<<"You are a loser!";
        break;
    }

    return 0;
}