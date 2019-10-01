// TTT.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;
int main()
{
    cout << "Welcome to Tic Tac Toe."<<endl;
	cout << "Game Rules: " << endl;
	cout << "This is standard TTT but you are allowed to specify the following: " << endl;
	cout << "1) Board Size: NxN, where N >= 3" << endl;
	cout << "2) Number of human players, M,  where M >= 1" << endl;
	cout << "3) Number of AI players, A, where A >= 0" << endl;
	cout << "4) Note, the total number of players, M+A, must follow be within the range: 2 <= M+A <= N-1" << endl;
	cout << endl;
	cout << "The rules for winning the game for a player for a NxN board are as follows: " << endl;
	cout << "A Player wins the game if they have N pieces in a row, column or diagonal on the board." << endl;
	cout << "It is possible for no player to win the game, in which the game ends in a tie." << endl;
	cout << "..." << endl;
	cout << "..." << endl; 
	cout << "Game Start" << endl;

	Game game1;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
