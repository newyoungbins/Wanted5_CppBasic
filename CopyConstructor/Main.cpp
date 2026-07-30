#include "Player.h"
#include <iostream>

int main()
{
	Player player1;
	Player player2("Ronnie");
	Player player3(player2);

	std::cin.get();
}