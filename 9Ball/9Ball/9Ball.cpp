// 9Ball.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{

	//Sorry for the ridiculous comments.
	//It's a side effect of me learning to code.

	cout << "Hello world!\nI am a simple program.\nI ask what your name is, and when you tell me...\nI'll tell you what I think!\nSo... what's your name?\nMy name is:  ";
	string name;
	cin >> name;
	// call srand to give RNG a seed
	srand(time(NULL));
	// since rand() % 9 will return 0-8, add 1 to make it 1-9.
	int random = rand() % 9 + 1;

	switch ( random ) {
	case 1:
		system("color 0B");
		cout << name << ", that's a wonderful name!\n";
		break;
	case 2:
		system("color 0D");
		cout << name << ", that's a great name!\n";
		break;
	case 3:
		system("color 0E");
		cout << name << ", that's a nice name.\n";
		break;
	case 4:
		system("color 0F");
		cout << name << ", that's an okay name.\n";
		break;
	case 5:
		system("color 81");
		cout << name << ", that's a name.\n";
		break;
	case 6:
		system("color 07");
		cout << name << ", that's your name? Not my favorite...\n";
		break;
	case 7:
		system("color 06");
		cout << name << ", that's a terrible name!\n";
		break;
	case 8:
		system("color 05");
		cout << name << ", that's a horrible name!\n";
		break;
	case 9:
		system("color 04");
		cout << name << ", that's a failure of a name! Who came up with that?\n";
		break;
	}
	cout << "You had a 1/9 chance of getting that response, " << name << ".\n";
	system("pause");
	return 0;
}