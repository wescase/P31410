/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 3
* File: Account.cpp
* Instructor: Dr. DeBry
* Class: CS1410-001
* Date Written: February 5th 2015
* Description: Write the users information to file and read back to the user when requested.
*
* I declare the the following source code was written by Wes and Morgan,
* I understand the copying of any source code in whole or in part constitutes cheating,
* and I will recieve a 0 on this assignment if I violate this policy
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
	getline(_file, accBal);
	if (_file.fail() && !_file.eof())
	{
		throw FileError(READ_ERROR);
	}
	else if (_file.eof())
	{
		throw FileError(END_OF_FILE);
	}
	accNumber = stoi(accNum);
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
	if (_file.fail() && !_file.eof())
	{
		throw FileError(READ_ERROR);
	}
	else if (_file.eof())
	{
		throw FileError(END_OF_FILE);
	}
}