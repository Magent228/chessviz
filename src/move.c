#include <stdio.h>
#include <stdlib.h>

void PawnMoveWhite (int y, int x, int y1, int x1, char (*A)[10])
{
	if (A[y][x] == 'p')
	{
		if (A[y1][x1] == ' ' && x == x1 && abs(y1-y) <= 2)
		{
			printf("Possible move");
			A[y1][x1] = A[y][x];
			A[y][x] = ' ';
		}
	}
}

void PawnMoveBlack (int y, int x, int y1, int x1, char (*A)[10])
{
	if (A[y][x] == 'P')
	{
		if (A[y1][x1] == ' ' && x == x1 && abs(y1-y) <= 2)
		{
			printf("Possible move");
			A[y1][x1] = A[y][x];
			A[y][x] = ' ';
		}
	}
}

void PawnMove (int y, int x, int y1, int x1, char (*A)[10])
{
	if (A[y][x] == 'p')
	{
		PawnMoveWhite(y, x, y1, x1, A);

	}
	if (A[y][x] == 'P')
	{
		PawnMoveBlack(y, x, y1, x1, A);	
	}
}
