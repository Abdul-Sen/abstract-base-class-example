// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: Allocator.cpp
// Version: 2.0
// Date: 2018/7/20
// Student Name: Abdul Rehman Jahangir
// Description:
// This file contains definition of the global function CreateAccount
///////////////////////////////////////////////////
#include "SavingsAccount.h" 
#include "ChequingAccount.h"

namespace sict {
	iAccount::~iAccount() {

	}

	// define interest rate
	//
	const double INTREST_RATE = 0.05;
	const double TRANS_FEE = 0.50;
	const double MONTH_FEE = 2.00;

	//Allocator function
	iAccount* CreateAccount(const char* str, double init_balance)
	{
		SavingsAccount * sptr = nullptr;
		ChequingAccount * cptr = nullptr;
		switch (str[0])
		{
		case('s'):
		case('S'):

			sptr = new SavingsAccount(init_balance, INTREST_RATE);
			return sptr;
			break;
		case('C'):
		case('c'):
			cptr = new ChequingAccount(init_balance, TRANS_FEE, MONTH_FEE);
			return cptr;
			break;
		default:
			return nullptr;
			break;
		}
	}






}
