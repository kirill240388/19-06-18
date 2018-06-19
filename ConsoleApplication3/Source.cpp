#include <stdlib.h>
#include<iostream>
#include<time.h>
#include<windows.h>
//#include"stdafx.h"
using namespace std;
int main()

{
	srand(time(NULL));
	setlocale(LC_ALL, "Rus");
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
		int n = 10,guess,usernumber,popytka;
		guess =1 + rand() % 4;
		for (int i = 0; i < n; i++)
		{
			
			cout << "popytka " << i+1 << endl;
			cout << "Vvedite chislo " << endl;
							cin >> usernumber;
				if (usernumber != guess)
				{
					cout << "Ne ugadali " << endl;
					cout << "zagadannoe chislo bylo " << guess << endl;
					cout << "Ostalos " << n - i-1 << " popytok" << endl;
					continue;
					

				}
				
						
				else
				{
					cout << "Vy ugadali " <<"s "<<i+1<<" popytok"<<  endl;
					break;
					
			    }
				
				
				
		}
	}
	
	
		

	

}