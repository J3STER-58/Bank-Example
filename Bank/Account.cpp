#include "Account.h"

Account::Account(int accountNumber, Customer accountOwner) : _accountNumber(accountNumber), _accountOwner(accountOwner)
{
}

Account::~Account()
{
}

bool Account::Deposit(int pennies)
{	
	if (pennies > 0) 
	{
		_balance += pennies;
		return true;
	}
	return false;
}

bool Account::Withdraw(int pennies)
{
	if (pennies > 0) {
		_balance -= pennies;
		return true;
	}
	return false;
}

int Account::GetBalanceInPennies()
{
	return _balance;
}
