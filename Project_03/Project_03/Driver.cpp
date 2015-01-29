/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 3
* File: Driver.cpp
* Instructor: Dr. DeBry
* Class: CS1410-001
* Date Written: ************ FILL IN FINAL DATE **************
* Description: Write the users information to file and read back to the user when requested.
*
*/

#include "Driver.h"

int main()
{
	// Create vector for accounts
	vector<Account> accVector;

	// Create three person objects.You can use the names and addresses shown in the example output, or use your imagination to come up with something interesting.
	Person p1("Morgan A.", "1234 Street");
	Person p2("Westley C.", "4321 Cir.");
	Person p3("Homer Simpson", "5748 Spring");
	// Create three Account objects, where each account object contains one of your Person objects.Initialize the balance in the first account object to $500.00, the balance in the second to $1000.00, and the balance in the third to $1200.00.
	Account a1(p1, INIT_1, ACC_1);
	Account a2(p2, INIT_2, ACC_2);
	Account a3(p3, INIT_3, ACC_3);

	// Push these Account objects into the vector.
	accVector.push_back(a1);
	accVector.push_back(a2);
	accVector.push_back(a3);

/////////////////////// NEW PROJECT REQUIREMENTS ////////////////////////////
	// New: Create an ofstream object and open a file.Hard code the file name in your program.Pass the file name as the parameter to the open function of your ofstream object so that your program assumes the file to be in the same folder as your executable file.
	ofstream dataOut;

	dataOut.open("dataFile.txt");

	// New : Using a loop, send messages to each of the three Account objects to write themselves out to the file.
	if (dataOut.good())
	{
		for (unsigned int i = 0; i < accVector.size(); i++)
		{
			accVector[i].writeAccData(dataOut);
			accVector[i].getPerson().writePerData(dataOut);
		}
	}
	
	// New : Close the file.
	dataOut.close();
	// New : Clear the vector.
	accVector.clear();

	// create ifstrea object to read file
	ifstream in;
	in.open("dataFile.txt");
	// New : Use the default Account constructor to create three Account objects and push each one into the vector of Account objects.

	// New : Open the file that you just saved.
	// New : Using a loop, tell each object to read itself in from the file.







	// Using a for loop, add $25.00 to each account.
	for (unsigned i = 0; i < accVector.size(); i++)
	{
		accVector[i].makeDeposit(DEPOSIT);
	}
	// Using a second for loop, withdraw $100.00 from each account.
	for (unsigned i = 0; i < accVector.size(); i++)
	{
		accVector[i].makeWithdrawl(WITHDRAW);
	}
	// Finally, pass the vector to your displayAccounts function to display the account information for each Account object in th*/e vector.
	displayAccounts(accVector);

	cout << endl;
	system("Pause");
	return 0;

}

void displayAccounts(const vector<Account>& _aVector)
{
	
}

