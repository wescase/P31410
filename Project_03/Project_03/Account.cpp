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
	human = Person();
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

void Account::writeAccData(ofstream& _file) const
{
	_file << accNumber << endl;
	_file << accBalance << endl;
}

void Account::readAccData(ifstream& _file)
{
	string accNum;
	string accBal;

	getline(_file, accNum);
	accNumber = stoi(accNum);
	getline(_file, accBal);
	accBalance = stod(accBal);

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

void Person::writePerData(ofstream& _file)
{
	_file << name << endl;
	_file << address << endl;
	
}

void Person::readPerData(ifstream& _file)
{
	getline(_file, name);
	getline(_file, address);
}