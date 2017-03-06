#include "Bank.h"

Bank::Bank(std::string name) : _name(name)
{
}

Bank::~Bank()
{
}

std::string Bank::GetName()
{
	return _name;
}

bool Bank::OpenAccount(Account account, int startingPennies)
{
	account.Deposit(startingPennies);
	_accounts.push_back(account);
	return true;
}
