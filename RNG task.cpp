// RNG task.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;



int main()
{
	int num1, num2, num3, num4;
	int gues1, gues2, gues3, gues4;
	int Mynum, AInum;
	srand(time(NULL));
	AInum = rand() % 9000 + 1000;
	num1 = AInum / 1000;
	num2 = (AInum / 100) % 10;
	num3 = (AInum / 10) % 10;
	num4 = AInum % 10;
	cout << num1 << num2 << num3 << num4 << endl;
	cout << AInum << endl;
	

	do
	{
		int counter1 = 0;
		int counter2 = 0;
		cin >> Mynum;
		gues1 = Mynum / 1000;
		gues2 = (Mynum / 100) % 10;
		gues3 = (Mynum / 10) % 10;
		gues4 = Mynum % 10;
		
		if (gues1 == num1 || gues1 == num2 || gues1 == num3 || gues1 == num4)
		{
			if (gues1 == num1)
			{
				counter1++;
			}
			else
			counter2++;
		}
		if (gues2 == num1 || gues2 == num2 || gues2 == num3 || gues2 == num4)
		{
			if (gues2 == num2)
			{
				counter1++;
			}
			else
			counter2++;
		}
		if (gues3 == num1 || gues3 == num2 || gues3 == num3 || gues3 == num4)
		{
			if (gues3 == num3)
			{
				counter1++;
			}
			else
			counter2++;
		}
		if (gues4 == num1 || gues4 == num2 || gues4 == num3 || gues4 == num4)
		{
			if (gues4 == num4)
			{
				counter1++;
			}
			else
			counter2++;
		}

		cout << "you got " << counter1 << " bulls"
			<< " and " << counter2 << " cows" << endl;
		


	} while (num1 != gues1 || num2 != gues2 || num3 != gues3 || num4 != gues4);
	cout << "Congratulations !\n";

	return 0;
}
