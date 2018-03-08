#include "FBullCowGame.h"

using int32 = int;

FBullCowGame::FBullCowGame() { Reset(); }

int32 FBullCowGame::GetMaxTries() const { return MyMaxTries; }
int32 FBullCowGame::GetCurrentTry() const { return MyCurrentTry; }

bool FBullCowGame::IsGameWon() const
{
	return false;
}

void FBullCowGame::Reset()
{
	constexpr int32 MAX_TRIES = 3;
	MyMaxTries = MAX_TRIES;

	const Fstring HIDDEN_WORD = "plant";
	MyHiddenWord = HIDDEN_WORD;

	MyCurrentTry = 1;
	return;
}

bool FBullCowGame::CheckGuessValidity(Fstring)
{
	return false;
}

// recieves a VALID guess, increments turn, and returns count
FBullCowCount FBullCowGame::SubmitGuess(Fstring)
{
	// increments the turn number
	MyCurrentTry++;

	// return variable
	FBullCowCount BullCowCount;

	// loop through all letters in the guess
		// compare letters against the hidden word
			// if they match then
				// increments bulls if they're in the same place
				// increments cows if not

	return BullCowCount;
}


