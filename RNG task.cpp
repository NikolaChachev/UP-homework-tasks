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
	int guess1, guess2, guess3, guess4;
	int Mynum, AInum;
	int difDigits = 0;
	srand(time(NULL));	
	do
	{
		AInum = rand() % 9000 + 1000;
		num1 = AInum / 1000;
		num2 = (AInum / 100) % 10;
		num3 = (AInum / 10) % 10;
		num4 = AInum % 10;
		if (num1 == num2 || num1 == num3 || num1 == num4 || num2 == num3 || num2 == num4 || num3 == num4)
		{
			difDigits = 0;
		}
		else
		{
			difDigits = 1;
			
		}
	} while (difDigits != 1);
	do
	{
		int counter1 = 0;
		int counter2 = 0;
		cin >> Mynum;
		guess1 = Mynum / 1000;
		guess2 = (Mynum / 100) % 10;
		guess3 = (Mynum / 10) % 10;
		guess4 = Mynum % 10;
		
		if (guess1 == num1 || guess1 == num2 || guess1 == num3 || guess1 == num4)
		{
			if (guess1 == num1)
			{
				counter1++;
			}
			else
			counter2++;
		}
		if (guess2 == num1 || guess2 == num2 || guess2 == num3 || guess2 == num4)
		{
			if (guess2 == num2)
			{
				counter1++;
			}
			else
			counter2++;
		}
		if (guess3 == num1 || guess3 == num2 || guess3 == num3 || guess3 == num4)
		{
			if (guess3 == num3)
			{
				counter1++;
			}
			else
			counter2++;
		}
		if (guess4 == num1 || guess4 == num2 || guess4 == num3 || guess4 == num4)
		{
			if (guess4 == num4)
			{
				counter1++;
			}
			else
			counter2++;
		}

		cout << "You`ve got " << counter1 << " bulls"
			 << " and " << counter2 << " cows." << endl;
		


	} while (num1 != guess1 || num2 != guess2 || num3 != guess3 || num4 != guess4);
	cout << "Congratulations !" << endl;

	return 0;
}
