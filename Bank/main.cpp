#include <iostream>
#include "Bank.h"
using namespace std;

void CreateAccountSubsystem(Bank &bank);
void ViewAccountsSubsystem(Bank  &bank);
void DeleteAccountSubsystem(Bank &bank);

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
		cout << "2) View Accounts" << endl;
		cout << "3) Delete Account" << endl;
		cout << "4) Exit" << endl;
		cin >> choice;

		switch (choice)
		{
			case 1: CreateAccountSubsystem(bank); break;
			case 2: ViewAccountsSubsystem(bank); break;
			case 3: DeleteAccountSubsystem(bank); break;
			default: break;
		}
	} while (choice != 4);

	system("pause");
	return 0;
}

void CreateAccountSubsystem(Bank &bank)
{
	system("cls");
	string firstName, lastName;
	cout << "Customer FirstName: ";
	cin >> firstName;
	cout << endl << "Customer LastName: ";
	cin >> lastName;
	auto customer = Customer(firstName, lastName);

	int accountNumber;
	cout << endl << "Account Number: ";
	cin >> accountNumber;

	auto account = Account(accountNumber, customer);
	bank.OpenAccount(account, 0);
}

void ViewAccountsSubsystem(Bank &bank)
{
	system("cls");
	auto accounts = bank.GetAccounts();
	for (auto account : accounts) 
	{
		cout << account.GetAccountInfo() << endl;
	}
	system("pause");
}

void DeleteAccountSubsystem(Bank &bank)
{
	return;
}