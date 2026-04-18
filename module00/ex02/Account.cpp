#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::time_t now = std::time(NULL);
	std::tm*	lt = std::localtime(&now);

	std::cout	<< "[" << (lt->tm_year + 1900)
				<< std::setw(2) << std::setfill('0') << (lt->tm_mon + 1)
				<< std::setw(2) << std::setfill('0') << lt->tm_mday
				<< "_"
				<< std::setw(2) << std::setfill('0') << lt->tm_hour
				<< std::setw(2) << std::setfill('0') << lt->tm_min
				<< std::setw(2) << std::setfill('0') << lt->tm_sec
				<< "] ";
				
}

Account::Account( int initial_deposit )
{
	Account::_displayTimestamp();
	Account::_accountIndex = Account::_nbAccounts;
	std::cout << "index:" << Account::_accountIndex << ";";
	Account::_nbAccounts++;
	Account::_amount = initial_deposit;
	std::cout << "amount:" << Account::_amount << ";";
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	Account::_totalAmount += initial_deposit;
	std::cout << "created" << std::endl;
}

Account::~Account( void )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";";
	std::cout << "amount:" << this->_amount << ";";
	std::cout << "closed" << std::endl;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout 	<< "accounts:" << Account::getNbAccounts() << ";"
				<< "total:" << Account::getTotalAmount() << ";"
				<< "deposits:" << Account::getNbDeposits() << ";"
				<< "withdrawals:" << Account::getNbWithdrawals()
				<< std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout	<< "index:" << Account::_accountIndex << ";"
				<< "p_amount:" << Account::_amount << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << (Account::_amount + deposit) << ";"
				<< "nb_deposits:" << Account::_nbDeposits << std::endl;
	Account::_amount += deposit;
	Account::_totalAmount += deposit;
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << Account::_accountIndex << ";"
				<< "p_amount:" << Account::_amount << ";";
	if (withdrawal > Account::checkAmount())
	{
		std::cout << "withdrawal:refused" << std::endl;
		return false;
	}
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	Account::_nbWithdrawals++;
	std::cout	<< "withdrawal:" << withdrawal << ";"
				<< "amount:" << (Account::_amount - withdrawal) << ";"
				<< "nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
	Account::_amount -= withdrawal;
	return true;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout	<< "index:" << Account::_accountIndex << ";"
				<< "amount:" << Account::_amount << ";"
				<< "deposits:" << Account::_nbDeposits << ";"
				<< "withdrawals:" << Account::_nbWithdrawals << std::endl;
}
