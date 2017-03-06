#include <iostream>
#include "Bank.h"
using namespace std;


int main()
{
	//Create the bank
	auto bank = Bank("Awesome Bank");
	auto choice = 0;
	do 
	{
		system("cls");
		cout << "Welcome to " << bank.GetName() << endl;
		cout << "1) Create Account" << endl;
		cout << "2) Deposit" << endl;
		cout << "3) Withdrawl" << endl;
		cout << "4) Exit" << endl;
		cin >> choice;
	} while (choice != 4);

	system("pause");
	return 0;
}

