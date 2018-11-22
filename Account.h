// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: Account.h
// Version: 2.0
// Date: 2018/7/20
// Student Name: Abdul Rehman Jahangir
// Description:
// This file defines the Account class
///////////////////////////////////////////////////

#ifndef SICT_ACCOUNT_H__
#define SICT_ACCOUNT_H__

#include "iAccount.h"

namespace sict {
   
	class Account :public iAccount
	{
	private:
		double amount;
	protected:
		double balance() const;
	public:
		// constructor initializes account balance, defaults to 0.0 
		Account(double = 0.0);

		// credit adds +ve amount to the balance 
		bool credit(double);

		// debit subtracts a +ve amount from the balance
		bool debit(double);

	};


}
#endif
