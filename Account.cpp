// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: Account.cpp
// Version: 2.0
// Date: 2018/7/24
// Student Name: Abdul Rehman Jahangir
// Description:
// This file has Account class implimnetation
///////////////////////////////////////////////////

#include <iostream>
#include "Account.h"

namespace sict {
	
	//default/ 1 arg constructor
	Account::Account(double ui_amount) {
		if (ui_amount >= 0)
		{
			this->amount = ui_amount;
		}
		else
		this->amount = 0.0;
	}

	//credit adds +ve amount to the balance 
	bool Account::credit(double ui_amount) {
		if (ui_amount > 0)
		{
			this->amount += ui_amount;
			return true;
		}
		return false;
	}

	//debit subtracts a +ve amount from the balance
	bool Account::debit(double ui_amount)
	{
		if (ui_amount > 0)
		{
			this->amount -= ui_amount;
			return true;
		}
		return false;
	}

	//shows current balance of the object
	double Account::balance() const
	{
		return this->amount;
	}

}
