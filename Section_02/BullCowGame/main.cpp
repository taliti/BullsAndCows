#include <iostream>
#include <string>
#include "FBullCowGame.h"

using Ftext = std::string;
using int32 = int;

void PrintIntro();
void PlayGame();
Ftext GetGuess();
bool AskToPlayAgain();

FBullCowGame BCGame; // initiate a new game

// entry point for our application
int main()
{	
	bool bPlayAgain = false;
	do 
	{
		PrintIntro();
		PlayGame();
		bPlayAgain = AskToPlayAgain();
	} 
	while (bPlayAgain);
	return	0; // exit game
}

// introduce the game
void PrintIntro() 
{
	constexpr int32 WORD_LENGTH = 5;
	std::cout << "Welcome to Bulls and Cows!\n";
	std::cout << "This is a fun word game, yaaaaay!\n";
	std::cout << "Do you know the " << WORD_LENGTH;
	std::cout << " letter isogram that I'm thinking of?\n";
	std::cout << std::endl;
	return;
}

// start of the game
void PlayGame()
{
	BCGame.Reset();
	int32 MaxTries = BCGame.GetMaxTries();

	// loop for the number of turns asking for guesses
	// TODO change the FOR loop to WHILE loop
	for (int32 count = 1; count <= MaxTries; count++) 
	{
		Ftext Guess = GetGuess(); // TODO make loop checking valid
		std::cout << "Your guess was: " << Guess << std::endl;

		// submit valid guess to the game
		// print back bumber of bulls and cows
		std::cout << std::endl;
	}

	// TODO summarise game
	return;
}

// get a guess from the player
Ftext GetGuess()
{
	int32 CurrentTry = BCGame.GetCurrentTry();

	std::cout << "Try " << CurrentTry << ". Enter your guess: ";
	Ftext Guess = "";
	std::getline(std::cin, Guess);
	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again? (y/n) ";
	Ftext Response = "";
	std::getline(std::cin, Response);
	std::cout << std::endl;

	return (Response[0] == 'y') || (Response[0] == 'Y');
}
