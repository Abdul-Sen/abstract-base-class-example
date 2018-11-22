// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: ChequingAccount.h
// Version: 2.0
// Date: 2018/7/24
// Student Name: Abdul Rehman Jahangir
// Description:
// This file defines the ChequingAccount class
///////////////////////////////////////////////////
#ifndef SICT_CHEQUINGACCOUNT_H__
#define SICT_CHEQUINGACCOUNT_H__

#include "Account.h"

namespace sict {
	class ChequingAccount : public Account
	{
	private:
		double transaction_fee;
		double month_end;
		public:
			//  constructor initializes account balance and transaction fee
			ChequingAccount(double, double, double);

			//  credit adds +ve amount to the balance
			bool credit(double);

			//  debit subtracts a +ve amount from the balance
			bool debit(double);

			//  month end
			void monthEnd();

			//  display inserts the account information into an ostream
			void display(std::ostream&) const;

	};
}
#endif
