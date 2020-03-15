#include <iostream>

void PrintIntroduction(int Difficulty) 
{
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficulty << " secure server room...\n";
    std::cout << "Enter the correct code to continue...\n" << std::endl;
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    int CodeA {rand()};
    int CodeB {rand()};
    int CodeC {rand()};
    
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
        std::cout << "\n*** Well done agent! You have extracted a file! Keep going! ***";
        return true;
    }
    else 
    {
        std::cout << "\n*** You entered the wrong code! Careful agent! Try again! ***";
        return false;
    }
}

int main()
{
    int LevelDifficulty {1};
    const int MaxDifficulty {5};
    while (LevelDifficulty <= MaxDifficulty)
    {
        bool bLevelComplete {PlayGame(LevelDifficulty)};
        std::cin.clear();
        std::cin.ignore();

        if (bLevelComplete)
        {
            ++LevelDifficulty;
        }
    }
    std::cout << "\n*** Great work agent! You got all the files! Now get out of there! ***\n";

    std::cout << std::endl;
    return 0;
}
