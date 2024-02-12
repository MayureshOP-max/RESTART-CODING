#include <iostream>
#include <ctime>

int main()
{
    int num;
    int guess;
    int tries;

    srand(time(NULL));        // Seed the random number generator with current time.
    num = (rand() % 100) + 1; // Generate a random integer between 1 and 100, inclusive.

    std::cout << "**********Welcome to Guess My Number Game!***********\n";

    do
    {
        std::cout << "Guess a number between 1 - 100: ";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "TOO HIGH! Try Again.\n";
        }
        else if (guess < num)
        {
            std::cout << "TOO LOW! Try Again.\n";
        }
        else
        {
            std::cout << "CORRECT! You guessed it in " << tries << " attempts!\n";
        }
    } while (guess != num);

    std::cout << "***********************************";

    return 0;
}