#pragma once
#include <iostream>
#include <string>


class AccountClass
{
public:
	std::string AccountNum;
	std::string Name;
	double Balance;
	bool BalanceCheck();
	void Deposit(double amount);
	void Withdraw(double amount);
	
};

