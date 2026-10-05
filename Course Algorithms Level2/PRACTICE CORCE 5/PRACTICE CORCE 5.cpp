#include <iostream>
#include <string>

using namespace std;
enum enGameChoice{ stone=1,paper=2, scissors=3 };
enum enWinner {Playr1=1,computer =2, Draw=3};

struct stRoundInfo
{
    short RoundNumber = 0;
    enGameChoice Player1Choice;
    enGameChoice ComputerChoice;
    enWinner Winner;
    string WinnerName;
 };

struct stGameResults
{
    short GameRounds = 0;
    short Player1WinTimes = 0;
    short ComputerZwinTimes = 0;
   short  DrawTimes = 0;
   enWinner GameWinner;
   string WinnerName = "";
   
};

enGameChoice ReadPlayr1Choice()
{
    short Choice = 1;
    do
    {
        cout << "\nYour choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";
        cin >> Choice;
    } while (Choice < 1 || Choice >3);
    return (enGameChoice)Choice;
}

int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

string WinnerName(enWinner Winner)
{
    string arrWinnerName[3] = { "Playr1","Computer","No Winner" };
    return arrWinnerName[Winner - 1];

}

enWinner WhoWonTheRound(stRoundInfo RoundInfo)
{
    if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
    {
        return enWinner::Draw;
    }
    switch (RoundInfo.Player1Choice)
    {
    case enGameChoice::stone:
        if (RoundInfo.ComputerChoice == enGameChoice::paper)
        {
            return enWinner::computer;
        }
        break;
    case enGameChoice::paper:
        if (RoundInfo.ComputerChoice == enGameChoice::scissors)
        {
            return enWinner::computer;
        }
        break;
    case enGameChoice::scissors:
        if (RoundInfo.ComputerChoice == enGameChoice::stone)
        {
            return enWinner::computer;
        }
        break;
    }
    return enWinner::Playr1;
    
}

string choiceName(enGameChoice choice)
{
    string arrGamechoices[3] = { "Stone", "Paper","Scissors " };
    return arrGamechoices[choice - 1];

}

void SetWinnerScreenColor(enWinner winner)
{
    switch (winner)
    {
    case enWinner::Playr1:
        system("color 2F"); // احمر 
        break;
    case enWinner::computer:
        system("color 4F"); // اخضر
        cout << "\a";
        break;
    default:
        system("color 6F"); // تعادل
        break;
    }
}


void PrintRoundResults(stRoundInfo RoundInfo)
{
    cout << "\n_____________Round [" << RoundInfo.RoundNumber << "]_____________\n\n";
    cout << "Play1    Choice: " << choiceName(RoundInfo.Player1Choice) << endl;
    cout << "Computer Choice: " << choiceName(RoundInfo.ComputerChoice) << endl;
    cout << "Round Winner   : [" << RoundInfo.WinnerName << "] \n";
    cout << "_________________________________\n" << endl;


}


enGameChoice GetComputerChoice()
{
    return (enGameChoice)RandomNumber(1, 3);

}

enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes)
{
    if (Player1WinTimes > ComputerWinTimes)
        return enWinner::Playr1;
    else if (ComputerWinTimes > Player1WinTimes)
        return enWinner::computer;
    else
        return enWinner::Draw;
}

stGameResults FillGameResults(int GameRounds, short Player1WinTimes, short ComputerWinTimes, short DrawTimes)
{
    stGameResults GameResults;
    GameResults.GameRounds = GameRounds;
    GameResults.Player1WinTimes = Player1WinTimes;
    GameResults.ComputerZwinTimes = ComputerWinTimes;
    GameResults.DrawTimes = DrawTimes;
    GameResults.GameWinner = WhoWonTheGame(Player1WinTimes, ComputerWinTimes);
    GameResults.WinnerName = WinnerName(GameResults.GameWinner);
    return GameResults;
}

stGameResults PlayGame(short HowManyRounds)
{
    stRoundInfo RoundInfo;
    short Playr1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;
    for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++)
    {
        cout << "\nRound [" << GameRound << "] begins:\n";
        RoundInfo.RoundNumber = GameRound;
        RoundInfo.Player1Choice = ReadPlayr1Choice();
        RoundInfo.ComputerChoice = GetComputerChoice();
        RoundInfo.Winner = WhoWonTheRound(RoundInfo);
        RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

        if (RoundInfo.Winner == enWinner::Playr1)
            Playr1WinTimes++;
        else if (RoundInfo.Winner == enWinner::computer)
            ComputerWinTimes++;
        else
            DrawTimes++;
        PrintRoundResults(RoundInfo);
        SetWinnerScreenColor(RoundInfo.Winner);

    }
    return FillGameResults(HowManyRounds, Playr1WinTimes, ComputerWinTimes, DrawTimes);
}

string Tabs(short NumberOfTabs)
{
    string t = "";
    for (int i = 1; i < NumberOfTabs; i++)
    {
        t = t + "\t";
        cout << t;
    }
    return t;
}

void showGameOverScreen()
{
    cout << Tabs(2) << "__________________________________________________________\n\n";
    cout << Tabs(2) << "               +++ G a m e O v e r +++\n";
    cout << Tabs(2) << "__________________________________________________________\n\n";
}

void ShowFinalGameResults(stGameResults GameResults)
{
    cout << Tabs(2) << "_____________________ [Game Results ]_____________________\n\n";
    cout << Tabs(2) << "Game Rounds        : " << GameResults.GameRounds << endl;
    cout << Tabs(2) << "Player1 won times  : " << GameResults.Player1WinTimes << endl;
    cout << Tabs(2) << "Computer won times : " << GameResults.ComputerZwinTimes << endl;
    cout << Tabs(2) << "Draw times         : " << GameResults.DrawTimes << endl;
    cout << Tabs(2) << "Final Winner       : " << GameResults.WinnerName << endl;
    cout << Tabs(2) << "___________________________________________________________\n\n";


    SetWinnerScreenColor(GameResults.GameWinner);
}
short ReadHowManyRounds()
{
    short GameRounds = 1;
    do
    {
        cout << "How Many Rounds 1 to 10? \n";
        cin >> GameRounds;
    } while (GameRounds < 1 || GameRounds >10);
    return GameRounds;

}

void ResetScreen()
{
    system("cls");
    system("color 0F");
}

void StartGame()
{
    char PlayAgain = 'Y';
    do
    {
        ResetScreen();
        stGameResults GameResults = PlayGame(ReadHowManyRounds());
        showGameOverScreen();
        ShowFinalGameResults(GameResults);
        cout << "Do you Want to Play Again? Y/N ";
        cin >> PlayAgain;


    } while (PlayAgain == 'Y' || PlayAgain == 'y');
}


int main()

{
    srand((unsigned)time(NULL));
    StartGame();
    

    return 0;
}
