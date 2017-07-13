#include <iostream>
#include <string>

void PrintIntro();
void PlayGame();
std::string GetGuess();
bool AskToPlayAgain();

int main()
{
	do 
	{
		PrintIntro();
		PlayGame();
	} while (AskToPlayAgain());

	return 0;
}

void PrintIntro()
{
	//introduce the game
	constexpr int WORD_LENGTH = 5;

	std::cout << "Welcome to Bulls and Cows, a fun word game.\n";
	std::cout << "Can you guess the " << WORD_LENGTH;
	std::cout << " letter isogram I'm thinking of ?\n";
	std::cout << std::endl;
	return;
}

void PlayGame()
{
	constexpr int NUMBER_OF_TURNS = 5;

	for (int i = 1; i <= NUMBER_OF_TURNS; i++)
	{
		std::string Guess = GetGuess();
		std::cout << "Your guess was : " << Guess << std::endl;

		std::cout << std::endl;
	}
}

// get a guess from the player
std::string GetGuess() {
	std::string Guess = "";

	std::cout << "Enter your guess : ";
	std::getline(std::cin, Guess);

	return Guess;
}

bool AskToPlayAgain()
{
	std::cout << "Do you want to play again ? (y/n)";
	std::string Response = "";
	std::getline(std::cin, Response);
	return (Response[0] == 'y' || Response[0] == 'Y');
}
