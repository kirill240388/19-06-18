#include <stdlib.h>
#include<iostream>
#include<time.h>
#include<windows.h>
//#include"stdafx.h"
using namespace std;
int main()


{
	
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int task,popytka;
	cin >> task;
	if (task == 1)
	{
		int n = rand() % 20;
		bool ugadal = false;
		int usernumber;

		do
		{
			cout << ++popytka << endl;
			cin >> usernumber;
			if (n == usernumber)
				ugadal == true;
		} while (!ugadal);
		cin >> usernumber;
		{
			cout << "ugadal" << endl;
		}
	}
	if (task == 2)
	{
		int n = 3,guess,usernumber,popytka;
		srand(time(NULL));
		
		for (int i = 1; i <= n; i++)
		{
			guess = 1+ rand() % 5;
			cout << "popytka " << i << endl;
			cout << "Vvedite chislo " << endl;
				cin >> usernumber;
				if (usernumber != guess)
				{
					
					cout << "Ne ugadali " << endl;
					cout << "zagadannoe chislo bylo " << guess << endl;
					cout << "Ostalos " << n-i << " popytok" << endl;
					continue;
				}
				
				cout << "Vy ugadali " << "s " << i << " popytok" << endl;
				break;
							
		}
		if (task == 3)
		{
			while (true)
			{
				int choice,amount;
				cout << "1. usd->kzt" << endl;
				cout << "2. kzt->usd" << endl;
				cout << "3. exit" << endl;
				if (choice == 3)
				{
					break;
				}
				if (choice == 1)
				{
					cout << "Vvedite summu v usd" << endl;
					cin >> amount;
					cout << amount * 320 <<"kzt"<< endl;
				}
				if (choice == 2)
				{
					cout << "Vvedite summu v kzt" << endl;
					cin >> amount;
					cout << amount / 320 << "usd" << endl;
				}
			}
		}
		if (task == 4)
		{
			bool exit = false;
			while (!exit)
			{
				int choice, amount;
				cout << "1. usd->kzt" << endl;
				cout << "2. kzt->usd" << endl;
				cout << "3. exit" << endl;
				cin >> choice;
				switch(choice)
				{
				case 3:
				
					break;
				
				case 1:
				
					cout << "Vvedite summu v usd" << endl;
					cin >> amount;
					cout << amount * 320 << "kzt" << endl;
					break;
				case 2:
				
					cout << "Vvedite summu v kzt" << endl;
					cin >> amount;
					cout << amount / 320 << "usd" << endl;
					break;
				}
			}
		}
		/*if (task == 5)
		{
			int a;
			char str[] = "Hello World!";*/

		}
		if (task == 6)
		{
			int n = 3, guess, usernumber, popytka;
			srand(time(NULL));
			cin >> usernumber;
			for (int i = 1; i <= n; i++)
			{
				guess = 1 + rand() % 5;
				cout << "popytka " << i << endl;
				
				
				if (usernumber != guess)
				{

					cout << "Computer ne ugadal " << endl;
					cout << "zagadannoe chislo bylo " << usernumber << endl;
					cout << "Ostalos " << n - i << " popytok" << endl;
					continue;
				}

				cout << "Computer ugadal " << "s " << i << " popytok" << endl;
				break;
		}
	}
	
	
		

	

}