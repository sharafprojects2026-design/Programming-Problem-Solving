#include <iostream>
#include <string>
#include <cmath>
using namespace std;
enum enWinner {Playerchoice=1,Computerchoice=2,Draw=3};
enum enGameChoice {Stone=1,Paper=2,Scissors=3};

struct stRoundInfo 
{
	int RoundNumber = 0;
	enGameChoice Playerchoice;
	enGameChoice Computerchoice;
	enWinner Winner;
	string WinnerName;
};
struct  stGameResults 
{
	int GameRounds = 0;
	int Player1WonTimes = 0;
	int ComputerWonTimes = 0;
	int DrawTimes;
	enWinner Winner;
	string WinnerName;
};
void SetWinnerScreenColor(enWinner Winner)
{
	switch (Winner)
	{
	case enWinner::Playerchoice:
		system(" color 2F");
		break;
	case enWinner::Computerchoice:
		system("color 4F");
		cout << "\a";
		break;
	default:
		system("color 6F");

	}
	
}
int ReadHowManyRounds()
{
	int RoundResults = 0;
	do
	{
		cout << "How Many Rounds 1 to 10? \n";
		cin >> RoundResults;
	} while (RoundResults < 1 || RoundResults >10);
	return RoundResults;

}

int RandomNumber(int From, int To)
{
	int randNum = rand() % (To - From + 1) + From;
	return randNum;
}

enGameChoice ComputerChoice()
{
	return (enGameChoice)RandomNumber(1, 3);
}
enGameChoice ReadPlayr1Choice()
{
	int RoundGame = 1;
	do
	{
		cout << "Your choice:[1]:stone, [2]:Paper, [3]:Scissors? ";
		cin >> RoundGame;
	} while (RoundGame < 1 || RoundGame > 3);
	return (enGameChoice)RoundGame;
	
}
enWinner whoWonTheGame(stRoundInfo RoundInfo)
{
	if (RoundInfo.Playerchoice == RoundInfo.Computerchoice)
	{
		return enWinner::Draw;
	}
	switch (RoundInfo.Playerchoice)
	{
	case enGameChoice::Stone:
		if (RoundInfo.Computerchoice == enGameChoice::Paper)
		{
			return  enWinner::Computerchoice;
			break;
		}
	case enGameChoice::Paper:
		if (RoundInfo.Computerchoice == enGameChoice::Scissors)
		{
			return enWinner::Computerchoice;
			break;
		}
	case enGameChoice::Scissors:
		if (RoundInfo.Computerchoice == enGameChoice::Stone)
		{
			return enWinner::Computerchoice;
			
		}
		break;
	}
	return enWinner::Playerchoice;

	
}
string WinnerName(enWinner Winner)

{
	string arrWinnerName[3] = { "Player","Computer","No Winner" };
	return arrWinnerName[Winner - 1];

}
void PrintRoundResults(stRoundInfo RoundInfo)
{
	cout << "____________________Round [ " << RoundInfo.RoundNumber << "]_______________\n" << endl;
	cout << "Play1    choice: " << RoundInfo.Playerchoice << endl;
	cout << "Computer choice: " << RoundInfo.Computerchoice << endl;
	cout << "Round Winner[" << RoundInfo.WinnerName << "]" << endl;
	cout << "______________________________________________________________________\n\n";

}
enWinner WhoWonTheGame(int PlayerWonTimes, int ComputerWonTimes)
{
	if (PlayerWonTimes > ComputerWonTimes)
		return enWinner::Playerchoice;
	else if (ComputerWonTimes > PlayerWonTimes)
		return enWinner::Computerchoice;
	else
		return enWinner::Draw;
}
stGameResults FillGameResult(int RoundNumber, int PlaywinTime, int ComputerWinTimes, int DrawTimes)
{
	stGameResults RoundResult;
	RoundResult.GameRounds = RoundNumber;
	RoundResult.Player1WonTimes = PlaywinTime;
	RoundResult.ComputerWonTimes = ComputerWinTimes;
	RoundResult.DrawTimes = DrawTimes;
	RoundResult.Winner = WhoWonTheGame(PlaywinTime, ComputerWinTimes);
	RoundResult.WinnerName = WinnerName(RoundResult.Winner);
	return RoundResult;
}


stGameResults PlayGame(int HowManyGame)
{
	stRoundInfo RoundInfo;
	int Player1ChoiceTimes = 0, ComputerChoiceTimees = 0, DrawTimes = 0;
	for (int i = 1; i <= HowManyGame; i++)
	{
		cout << "Round [" << i << "] begins:\n\n";
		RoundInfo.RoundNumber = i;
		RoundInfo.Playerchoice = ReadPlayr1Choice();
		RoundInfo.Computerchoice = ComputerChoice();
		RoundInfo.Winner = whoWonTheGame(RoundInfo);
		RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

		if (RoundInfo.Winner==enWinner::Playerchoice)
			Player1ChoiceTimes++;
		else if (RoundInfo.Winner== enWinner::Computerchoice)
			ComputerChoiceTimees++;
		else
			DrawTimes++;


		PrintRoundResults(RoundInfo);
		SetWinnerScreenColor(RoundInfo.Winner);
	}
	return FillGameResult(HowManyGame, Player1ChoiceTimes, ComputerChoiceTimees, DrawTimes);
}

string Tabs(int HowManyTab)
{
	string t = "";
	for (int i = 1; i <= HowManyTab; i++)
	{
		t = t + "\t";
	}
	return t;
}
void ShowgameOverScreen()
{
	cout << Tabs(3) << "________________________________________________________\n\n";
	cout << Tabs(3) << "            +++ G a m e O v e r +++\n\n";
	cout << Tabs(3) << "_________________________________________________________\n\n";
	cout << Tabs(3) << "___________________[Game Results ]_______________________\n\n";

}
void ShowFinalGameResults(stGameResults RoundResult)
{
	cout << Tabs(3) << "Game Rounds: " << RoundResult.GameRounds << endl;
	cout << Tabs(3) << "Player1 won times: " << RoundResult.Player1WonTimes << endl;
	cout << Tabs(3) << "Computer won times: " << RoundResult.ComputerWonTimes << endl;
	cout << Tabs(3) << "Final Winner: " << RoundResult.WinnerName << endl;
	cout << Tabs(3) << "_______________________________________________\n\n";
	SetWinnerScreenColor(RoundResult.Winner);
}
void RestScreen()
{
	system("cls");
	system("color 0F");
}
void StartGame()
{
	char PlayAgain = 'y';
	do
	{
		RestScreen();
		stGameResults RoundResult = PlayGame(ReadHowManyRounds());
		ShowgameOverScreen();
		ShowFinalGameResults(RoundResult);
		cout << "Do you Want to Play Again? Y/N" << endl;
		cin >> PlayAgain;
	} while (PlayAgain == 'Y' || PlayAgain == 'y');
	

}

int main()  
{
	StartGame();
	return 0;
   

}

