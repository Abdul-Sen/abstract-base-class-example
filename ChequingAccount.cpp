// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: ChequingAccount.cpp
// Version: 2.0
// Date: 2017/12/11
// Author: Chris Szalwinski, based on previous work by Heidar Davoudi
// Student: Abdul Rehman Jahangir
// Description:
// This file implements the ChequingAccount class
///////////////////////////////////////////////////

#include "ChequingAccount.h"

using namespace std;

namespace sict {
	// constructor initializes balance and transaction fee
	//
	ChequingAccount::ChequingAccount(double ui_balance, double transaction, double month_end_fee) : Account(ui_balance)
	{
		if (transaction >= 0)
		{
			this->transaction_fee = transaction;
		}
		else
		{
			this->transaction_fee = 0.0;
		}

		if (month_end_fee >= 0)
		{
			this->month_end = month_end_fee;
		}
		else
			this->month_end = 0.0;
	}


	// credit (add) an amount to the account balance and charge fee
	// returns bool indicating whether money was credited
	//
	bool ChequingAccount::credit(double credit_amount)//TODO: find out when to return false
	{
		Account::credit(credit_amount);
		Account::debit(this->transaction_fee);
		return true;
	}



	// debit (subtract) an amount from the account balance and charge fee
	// returns bool indicating whether money was debited
	//
	bool ChequingAccount::debit(double deduct_me)//TODO: Check when to return false
	{
		Account::debit(deduct_me);
		Account::debit(transaction_fee);
		return true;
	}


	// monthEnd debits month end fee
	//
	void ChequingAccount::monthEnd()
	{
		debit(this->month_end);
	}

	// display inserts account information into ostream os
	//
	void ChequingAccount::display(std::ostream& output) const
	{
		output << "Account type: Chequing" << std::endl;
		output.setf(std::ios::fixed);
		output.precision(2);
		output << "Balance: $" << this->balance() << std::endl;
		output << "Per Transaction Fee: " << this->transaction_fee << std::endl;
		output << "Monthly Fee: " << this->month_end << std::endl;

	}



}