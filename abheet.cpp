#include <iostream>
#include <array>
#include <tuple>
#include <random>
// X denotes human. O denotes AI.
// turn = 1, denotes human's turn.
// turn = 0, denotes AI's turn.

std::tuple<int, int> humanInput() // takes human input (coordinates)
{
	std::cout << "Enter x and y coordinates (Starting from 0 to 2)\n: ";
	int x, y = -1;
	std::cin >> x >> y;
	return std::make_tuple(x, y);
}

void AI()
{	
	std::array<std::array<char, 3>, 3> board{}; // generate an empty 3x3 board for tic-tac-toe
	int flagFirstMove = -1;
	int turn = 1; 
	while(true)
	{	
		if(turn == 1)
		{

			auto coordinates = humanInput();
			int x, y = -1;							
			x = std::get<0>(coordinates);
			y = std::get<1>(coordinates);
			
			// make code snippet where an X is placed at (x, y)
           		 // board[x][y]='X';
           		 //showboard(board);

			if(flagFirstMove == -1); // This runs ONLY once. First move is by human always.
			{
				std::cout << "The game begins!\n";
				flagFirstMove = 1;
				turn = 0;
				
				std::default_random_engine integer_generator;
				std::uniform_int_distribution<int> distributor(0, 2);
				int x =	distributor(integer_generator);
				int y = distributor(integer_generator);
				
				// add code to place an O at (x, y)
				continue; // dont check the else-if statement this time, cause AI did its job here.
			}
		}
		else if(turn == 0)
		{
			// AI ka code banao
		}

		// write code to check if
		// the board ran out of empty spaces.
		// or if
		//someone reached 3-unit-long-streak
	
	}


int main()
{
    AI();
    return 0;
}

