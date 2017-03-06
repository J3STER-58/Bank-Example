#pragma once
#include "Customer.h"
class Account
{
	int _accountNumber;
	int _balance = 0;
	Customer _accountOwner;
public:
	Account(int accountNumber, Customer accountOwner);
	~Account();

	std::string GetAccountInfo();
	bool Deposit(int pennies);
	bool Withdraw(int pennies);
	int GetBalanceInPennies();
};

