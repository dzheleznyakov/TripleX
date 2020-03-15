#include <iostream>

int main()
{
    std::cout << "You are a secret agent breaking into a secure server room..." << std::endl;
    std::cout << "Enter the correct code to continue..." << std::endl;

    int CodeA {4};
    int CodeB {3};
    int CodeC {2};
    
    int CodeSum {CodeA + CodeB + CodeC};
    int CodeProduct {CodeA * CodeB * CodeC};

    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add up to " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give " << CodeProduct << std::endl;

    int GuessA, GuessB, GuessC;
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;

    int GuessSum {GuessA + GuessB + GuessC};
    int GuessProduct {GuessA * GuessB * GuessC};

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "You win!";
    }
    else 
    {
        std::cout << "You lose!";
    }

    std::cout << std::endl << std::endl;
    return 0;
}
