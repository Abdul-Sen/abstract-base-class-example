// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: SavingsAccount.h
// Version: 2.0
// Date: 2018/7/20
// Student Name: Abdul Rehman Jahangir
// Description:
// This file defines the SavingsAccount class
///////////////////////////////////////////////////
#ifndef SICT_SAVINGSACCOUNT_H__
#define SICT_SAVINGSACCOUNT_H__

#include "Account.h"

namespace sict {
	class SavingsAccount :public Account
	{
		double interest_rte;
	
	public:
			// constructor initializes balance and interest rate
		SavingsAccount(double, double = 0.0);

			// perform month end transactions
		void monthEnd();

			// display inserts the account information into an ostream			
		void display(std::ostream&) const;
	};
}
#endif
