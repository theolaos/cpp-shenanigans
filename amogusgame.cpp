// Created in Dcoder in Oct 15 2021
// https://code.dcoder.tech/files/code/6118d1e09601c7065a914254/amogusgame?section=all

#include <iostream>
#include <ctime>
using namespace std;

void PrintIntroduction(int Difficulty)
{
    //Print welcome messages to the ternimal
    cout << "\n\n_____________________________________________________________________________________________________________________________\n";
    cout << "You are at elecrical, lost and scared but you need to do the task\n";
    cout << "for every task you do right you will eject an impostor, but every time you fail you will eject a fellow crewmate\n";
    cout << "you are curently in task: " << Difficulty;
}

bool PlayGame(int Difficulty)
{
    PrintIntroduction(Difficulty);

    //Declare 3 number code
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;
    
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    //Print sum and product to the ternimal
    cout << "\n\n-Every task you do will need to have 3 digits of code";
    cout << "\n-The code of the task adds up to: " << CodeSum;
    cout << "\n-The code of the task multiply to give: " << CodeProduct;
    cout << std::endl;

    //Store player guess input
    int GuessA, GuessB, GuessC;
    
    cin >> GuessA >> GuessB >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the player is correct
    if(GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        //win
        cout << "\n\nyeah, that is what i call a win\n";
        cout << "a SUSSY IMPOSTOR just got thrown out\n";
        cout << "you are as good as i thought, keep up the nice work\n";
        return true;
    }
    else
    {
        //lose
        cout << "\n\nreally, i thought you were better than this\n";
        cout << "a fellow crewmate has just been thrown in the deep vacuum of space...\n";
        return false;
    } 
}


int main()
{
    srand(time(NULL)); // create a new random sequence based on the time of the day

    int LevelDificulty = 1;
    const int MaxLevel = 5;
    
    while (LevelDificulty <= MaxLevel) // Loop the game until all the levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDificulty);
        cin.clear(); //Clears any errors
        cin.ignore(); // Discards the buffer

        if (bLevelComplete)
        {
            ++LevelDificulty;
        }
        
    }
    
    cout << "\n***congratulations you are the best crewmate in the world :)***\n";

    return 0;
}
