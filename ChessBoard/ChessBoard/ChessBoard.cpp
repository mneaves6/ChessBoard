﻿/*
 * Name: Maximiliano Neaves
 * Section: COSC/ITSE 1307
 * Homework: ChessBoard
 * This program prints a Chess board similar to the following diagram.
 *  r n b q k b n r
 *  p p p p p p p p
 *  * * * * * * * *
 *  * * * * * * * *
 *  * * * * * * * *
 *  * * * * * * * *
 *  P P P P P P P P
 *  R N B Q K B N R
 */

#include "stdafx.h"
#include <iostream>
using namespace std;

const int INTROWS = 8;
const int INTCOLUMNS = 8;

//Function to print the board
void printBoard(char aryBoard[INTROWS][INTCOLUMNS], int intRows)
{
	for (int intRow = 0; intRow < intRows; intRow++)
	{
		for (int intColumn = 0; intColumn < INTCOLUMNS; intColumn++)
		{
			cout << "\t";
			cout << aryBoard[intRow][intColumn];
		}
		cout << endl;
	}
}

//Function to show a clear board
void clearBoard(char aryBoard[INTROWS][INTCOLUMNS], int intRows)
{
	for (int intRow = 0; intRow < intRows; intRow++)
	{
		for (int intColumn = 0; intColumn < INTCOLUMNS; intColumn++)
		{
			aryBoard[intRow][intColumn] = '*';
		}
	}
}

//Function to fill the board with pieces
void fillBoard(char aryBoard[INTROWS][INTCOLUMNS], int intRows, int intRow, int intColumn)
{
	aryBoard[0][0] = 'r';
	aryBoard[0][1] = 'n';
	aryBoard[0][2] = 'b';
	aryBoard[0][3] = 'q';
	aryBoard[0][4] = 'k';
	aryBoard[0][5] = 'b';
	aryBoard[0][6] = 'n';
	aryBoard[0][7] = 'r';
	aryBoard[1][0] = 'p';
	aryBoard[1][1] = 'p';
	aryBoard[1][2] = 'p';
	aryBoard[1][3] = 'p';
	aryBoard[1][4] = 'p';
	aryBoard[1][5] = 'p';
	aryBoard[1][6] = 'p';
	aryBoard[1][7] = 'p';
	aryBoard[6][0] = 'P';
	aryBoard[6][1] = 'P';
	aryBoard[6][2] = 'P';
	aryBoard[6][3] = 'P';
	aryBoard[6][4] = 'P';
	aryBoard[6][5] = 'P';
	aryBoard[6][6] = 'P';
	aryBoard[6][7] = 'P';
	aryBoard[7][0] = 'R';
	aryBoard[7][1] = 'N';
	aryBoard[7][2] = 'B';
	aryBoard[7][3] = 'Q';
	aryBoard[7][4] = 'K';
	aryBoard[7][5] = 'B';
	aryBoard[7][6] = 'N';
	aryBoard[7][7] = 'R';
}

int main()
{
	char aryBoard[INTROWS][INTCOLUMNS];

	clearBoard(aryBoard, INTROWS);
	fillBoard(aryBoard, INTROWS, 0, 0);
	printBoard(aryBoard, INTROWS);

    return 0;
}

