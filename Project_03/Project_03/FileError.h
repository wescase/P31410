#pragma once
/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 3
* File: FileError.h
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

const int END_OF_FILE = 0;
const int READ_ERROR = 1;

class FileError
{
private:
	int errorCode;
public:

	// FileError()
	// Purpose: Instanciate the FileError Object
	// Parameters: int - error code
	// Retunrs: none
	FileError(int _a);

	// getErrorCode()
	// Purpose: To return the error code of the object
	// Parameters: none
	// returns: int - the error code
	int getErrorCode() const;
};

