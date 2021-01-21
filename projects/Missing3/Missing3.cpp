#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficulty)
{
    std::cout << "\n\nSAMPLE MISSING 3 NUMBERS TEST";
     std::cout << "Looks like there's this new lock that prevents people who aren't used to math from accessing contents.\n";
     std::cout << "This lock has varying levels, and it's currently at " << Difficulty <<std::endl;
    //std::cout << std::endl;
    std::cout << "We're going to have input 3 numbers by figuring out the question.";
}//end introduction print

bool PlayGame(int DifficultyParameter, bool &GameOverState, int &AttemptsRemaining)
{
    PrintIntroduction(DifficultyParameter);
    
    /*-------------------------
    //only if we want to increase number by 1 after level 1
    if (DifficultyParameter >= 1)
    {
        if (DifficultyParameter > 1)
        {
            DifficultyParameter+1;
        }
        else
        {
            DifficultyParameter+2;
        }
    }
    --------------------------*/

    //declaring 3 numbers for the code
    const int LockA = (rand()% DifficultyParameter) + DifficultyParameter;
    const int LockB = (rand()% DifficultyParameter) + DifficultyParameter;
    const int LockC = (rand()% DifficultyParameter) + DifficultyParameter;

    const int LockSum = LockA+LockB+LockC;
    const int LockProduct = LockA*LockB*LockC;

    std::cout << std::endl << std::endl;
    //print LockSum and LockProduct to the terminal
    std::cout << "There are 3 numbers for this lock" << std::endl;
    std::cout << "\nThe 3 numbers add up to: " << LockSum << std::endl;
    std::cout << "& the numbers multiply to " << LockProduct << std::endl;
    std::cout << "You have " << AttemptsRemaining << " attempts remaining.\n";


    //stores player guess
    int GuessA, GuessB, GuessC;
    std::cin >> GuessA >>GuessB >>GuessC;
   
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //check player's guess is corect
    if(GuessSum==LockSum && GuessProduct==LockProduct)
    {
        std::cout << "You are correct!\n";
        std::cout << "But it seems there's another lock...\n";
        GameOverState = false;
        AttemptsRemaining = 3;
        return true;
    }//end if
    else
    {
        std::cout << "You are wrong...\n";
        --AttemptsRemaining;
        if (AttemptsRemaining==0)
        {
            GameOverState = true;
            std::cout << "You have no more attempts...\n";
        }
        else
        {
            std::cout << "You have " << AttemptsRemaining << " left.";
            std::cout << "Try again...\n";
        }
        return false;
    }

}//end PlayGame



int main()
{   
    srand(time(NULL));
    int LevelDifficulty = 1;
    const int MaxLevelDifficulty = 5;
    bool GameOver = false;
    int AttemptsRemaining = 3;

    while (LevelDifficulty <= MaxLevelDifficulty) //loop game until all levels completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty, GameOver, AttemptsRemaining);
        std::cin.clear(); //clears any errors
        std::cin.ignore(); //discards the buffer
        if (GameOver==true)
        {
            break;
        }

        if (bLevelComplete)
        {
            //increase level difficulty
            ++LevelDifficulty;
        }
    }//end while loop of levels/difficulty

    if (GameOver==true)
    {
        std::cout << "Game Over\n";
    }
    else
    {
        std::cout << "\n-------Nice job! You're pretty good at logical thinking!------------\n";
    }

    return 0;
}//end main