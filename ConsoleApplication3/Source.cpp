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
		
		for (int i = 1; i < n; i++)
		{
			guess = 1 + rand() % 4;
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
	}
	
	
		

	

}