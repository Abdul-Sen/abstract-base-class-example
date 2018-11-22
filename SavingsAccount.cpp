// OOP244 Workshop 8: Virtual Functions and Abstract Base Classes
// File: SavingsAccount.cpp
// Version: 2.0
// Date: 2018/7/20
// Student Name: Abdul Rehman Jahangir
// Description:
// This file impliments the SavingsAccount class
///////////////////////////////////////////////////
#include <iostream>
#include "SavingsAccount.h"

namespace sict {

//Default constructor
SavingsAccount::SavingsAccount(double ui_init_balance, double ui_interest_rate) :Account(ui_init_balance)
{
	if (ui_interest_rate >= 0)
	{
		this->interest_rte = ui_interest_rate;
	}
	else
		this->interest_rte = 0.0;
}


//adds interest to the account balance
void SavingsAccount::monthEnd()
{
	double tbalance = this->balance();
	double tint_rt = this->interest_rte;
	double temp = tbalance * tint_rt;
	credit(temp);
}

//displays current obj
void SavingsAccount::display(std::ostream& output) const 
{
	output << "Account type: Savings" << std::endl;
	output.setf(std::ios::fixed);
	output.precision(2);
	output << "Balance: $"<< this->balance() << std::endl;
	output << "Interest Rate (%): " << this->interest_rte*100 << std::endl;
}
}