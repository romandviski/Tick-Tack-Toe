#pragma once

#include <iostream>

using namespace std;

char boardData[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

void boardDrawing()
{
	system("cls");

	cout << "\n\n\ttick-tack-toe\n";
	cout << "Player_1 (X) | Player_2 (O)" << endl << endl;
	cout << "\t ----------- " << endl;
	cout << "\t| " << boardData[1] << " | " << boardData[2] << " | " << boardData[3] << " |" << endl;
	cout << "\t| " << boardData[4] << " | " << boardData[5] << " | " << boardData[6] << " |" << endl;
	cout << "\t| " << boardData[7] << " | " << boardData[8] << " | " << boardData[9] << " |" << endl;
	cout << "\t ----------- " << endl << endl;
}

int checkWin()
{
	if (boardData[1] == boardData[2] && boardData[2] == boardData[3])
		return 1;
	else if (boardData[4] == boardData[5] && boardData[5] == boardData[6])
		return 1;
	else if (boardData[7] == boardData[8] && boardData[8] == boardData[9])
		return 1;
	else if (boardData[1] == boardData[4] && boardData[4] == boardData[7])
		return 1;
	else if (boardData[2] == boardData[5] && boardData[5] == boardData[8])
		return 1;
	else if (boardData[3] == boardData[6] && boardData[6] == boardData[9])
		return 1;
	else if (boardData[1] == boardData[5] && boardData[5] == boardData[9])
		return 1;
	else if (boardData[3] == boardData[5] && boardData[5] == boardData[7])
		return 1;

	for (int i = 1; i < 10; i++)
	{
		if (static_cast<int>(boardData[i]) - 48 == i)
		{
			return -1;
		}
	}

	return 0;
}
