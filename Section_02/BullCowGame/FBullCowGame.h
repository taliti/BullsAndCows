#pragma once
#include <string>

using Fstring = std::string;
using int32 = int;

// all values initialized to zero
struct FBullCowCount
{
	int32 Bull = 0;
	int32 Cow = 0;
};

class FBullCowGame 
{
public:
	FBullCowGame(); 
	int32 GetMaxTries() const;
	int32 GetCurrentTry() const;
	bool IsGameWon() const;

	void Reset(); //TODO make a more rich return value.
	bool CheckGuessValidity(Fstring); // TODO make a richer return value.
	
	// counts bulls & cows and increases try number, assuming valid guess
	FBullCowCount SubmitGuess(Fstring);

private:
	// see constructor
	int32 MyCurrentTry;
	int32 MyMaxTries;
	Fstring MyHiddenWord;
};