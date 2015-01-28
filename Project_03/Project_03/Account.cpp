/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 2
* File: Account.cpp
* Instructor: Dr. DeBry
* Class: CS1410-001
* Date Written: ************ FILL IN FINAL DATE **************
* Description: Write the users information to file and read back to the user when requested.
*
*/

#include "Account.h"

// --------------- Account Class Methods -------------------
Account::Account()
{
	accBalance = 0.00;
	accNumber = 0;
}

Account::Account(const Person& _human, double _accBalance, int _accNumber)
{
	human = _human;
	accBalance = _accBalance;
	accNumber = _accNumber;
}

int Account::getAccountNumber() const
{
	return accNumber;
}

double Account::getAccountBalance() const
{
	return accBalance;
}

Person Account::getPerson() const
{
	return human;
}

void Account::writeData(ofstream& _file) const
{
	_file << accNumber << "," << Account::getPerson().getName() << "," << Account::getPerson().getAddress() << "," << accBalance << endl;
}

void Account::makeDeposit(double _deposit)
{

	accBalance += _deposit;
}

void Account::makeWithdrawl(double _withdrawl)
{
	accBalance -= _withdrawl;
}

// ----------------- Person Class Methods ----------------------
Person::Person()
{
	name = "";
	address = "";
}

Person::Person(const string& _name, const string& _address)
{
	name = _name;
	address = _address;
}

string Person::getName() const
{
	return name;
}

string Person::getAddress() const
{
	return address;
}
