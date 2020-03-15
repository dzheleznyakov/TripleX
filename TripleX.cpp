#include <iostream>

void PrintIntroduction() 
{
    std::cout << "\n\nYou are a secret agent breaking into a secure server room...\n";
    std::cout << "Enter the correct code to continue...\n" << std::endl;
}

bool PlayGame()
{
    PrintIntroduction();

    int CodeA {4};
    int CodeB {3};
    int CodeC {2};
    
    int CodeSum {CodeA + CodeB + CodeC};
    int CodeProduct {CodeA * CodeB * CodeC};

    std::cout << "+ There are 3 numbers in the code";
    std::cout << "\n+ The codes add up to " << CodeSum;
    std::cout << "\n+ The codes multiply to give " << CodeProduct << std::endl;

    int GuessA {}, GuessB {}, GuessC {};
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum {GuessA + GuessB + GuessC};
    int GuessProduct {GuessA * GuessB * GuessC};

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\nYou win!";
        return true;
    }
    else 
    {
        std::cout << "\nYou lose!";
        return false;
    }
}

int main()
{
    while (true)
    {
        bool bLevelComplete {PlayGame()};
        std::cin.clear();
        std::cin.ignore();
    }

    std::cout << std::endl << std::endl;
    return 0;
}
