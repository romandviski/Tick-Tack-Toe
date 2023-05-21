
#include "game.h"

int main()
{
	int player = 1, i, choice;
	char mark;

	do
	{
		boardDrawing();
		player = (player % 2) ? 1 : 2;
		cout << "Player_" << player << ", choice cell number: ";
		cin >> choice;
		mark = (player == 1) ? 'X' : 'O';

		if (static_cast<int>(boardData[choice]) - 48 == choice)
		{
			boardData[choice] = mark;
		}
		else
		{
			cout << "Action DENIED!";
			player--;
			cin.ignore();
			cin.get();
		}

		i = checkWin();
		player++;
	} while (i == -1);

	boardDrawing();
	if (i == 1)
		cout << "*** Player_" << --player << " WIN! ***";
	else
		cout << "*** DRAW ***";
	cin.ignore();
	cin.get();

	return 0;
}
