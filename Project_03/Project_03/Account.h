#pragma once
/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 2
* File: Account.h
* Instructor: Dr. DeBry
* Class: CS1410-001
* Date Written: ************ FILL IN FINAL DATE **************
* Description: Write the users information to file and read back to the user when requested.
*
*/

#include <string>
#include <fstream>

using namespace std;

// -------------- Person Class ----------------------
class Person
{
public:
	// Person();
	// Purpose: initialize object properties to default value
	// Parameters: none
	// returns: none
	Person();

	// Person();
	// Purpose: initialize object properties to passed in values
	// Parameters: string of Person name, string of Person address
	// returns: none
	Person(const string& _name, const string& _address);

	// getName()
	// Purpose: retrieve the Person objects name property
	// Parameters: none
	// Returns: string
	string getName() const;

	// getAddress()
	// Purpose: retrieve the Person objects address property
	// Parameters: none
	// Returns: string
	string getAddress() const;

	// writePerson()
	// Purpose: write the Person name and address properties
	// Paramater: Person object
	// Returns: none
	void writePerData(ofstream&);

	// readPerData()
	// Purpose: read in Person data
	// Parameters: file
	// Returns: none
	void readPerData(ifstream&);


private:
	string name;
	string address;
}; // End Person Class

// ------------------ Account Class --------------------
class Account
{
public:

	// Account() default constructor
	// Purpose: Initialize data members for object
	// Parameters: none
	// Returns: none
	Account();

	// Account() parameterized constructor
	// Purpose: initalize the data members for object
	// Parameters: Person object, double balance, int account number
	// Returns: none
	Account(const Person& _human, double _accBalance, int _accNumber);

	// getAccountNumber()
	// Purpose: get the account number
	// Parameters: none
	// Returns: int the account number
	int getAccountNumber() const;

	// getAccountBalance()
	// Purpose: get the account balance
	// Parameters: none
	// Return: double, the account balance
	double getAccountBalance() const;

	// getPerson()
	// Purpose: retrieve the person object associated to the account
	// Parameters: none
	// Returns: Person object
	Person getPerson() const;

	// writeData()
	// Purpose: Write the messages for an account to a file
	// Parameters: Message to be written to file
	// Returns: none
	void  writeAccData(ofstream&) const;

	// readAccData()
	// Purpose: read in Person data
	// Parameters: file
	// Returns: none
	void readAccData(ifstream&);

	//--------------- mutators ---------------

	// makeDeposit()
	// Purpose: deposite money to the account balance
	// Parameters: double, the deposit amount
	// returns: none
	void makeDeposit(double _deposit);

	// makeWithdrawl()
	// Purpose: withdrawl money from the account balance
	// Parameters: double, amount to withdrawl
	// Returns: none
	void makeWithdrawl(double _withdrawl);

private:
	int accNumber;
	double accBalance;
	Person human;
}; // End Account Class
