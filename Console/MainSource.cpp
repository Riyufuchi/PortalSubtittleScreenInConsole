#include <stdio.h>
#include <iostream>
#include <string>
#include "MyConsole.h"

using namespace std;

/*
* Copyright Header
*
* Created On: 13.07.2020
* Last Edit: 17.07.2020
* Created By: Riyufuchi
*
*/

int main(int argc, char **argv)
{	
	cout << "Hello world, it's living time." << endl;
	cout << "Let's make some practise for the 'big game'." << endl;
	MyConsole mc;
	mc.setTextColor(mc.HOT_PINK);
	//SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
	mc.test();
	cin.get();
	return 0;
}