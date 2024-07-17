/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roguigna <roguigna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:33:25 by roguigna          #+#    #+#             */
/*   Updated: 2024/07/17 17:47:28 by roguigna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int			Account::_nbAccounts = 0;
int			Account::_totalAmount = 0;
int			Account::_totalNbDeposits = 0;
int			Account::_totalNbWithdrawals = 0;


Account::Account( int initial_deposit ) : _accountIndex(_nbAccounts), _amount(_totalAmount), _nbDeposits(0), _nbWithdrawals(0) 
{
	_totalAmount+=initial_deposit;
	this->_amount = initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";created" << std::endl;
	_nbAccounts++;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";amount:" << this->_amount
			  << ";closed" << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount 
			  << ";deposit:" << deposit;
			  
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
	std::cout << ";amount:" << this->_amount
			  << ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex
			  << ";p_amount:" << this->_amount;
	if (this->_amount - withdrawal < 0)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (0);
	}
	_totalNbWithdrawals++;
	_totalAmount -= withdrawal;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	std::cout << ";withdrawal:" << withdrawal
			  << ";amount:" << this->_amount
			  << ";nb_withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
	return (1);
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";"
			  << "amount:" << this->_amount << ";"
			  << "deposits:" << this->_nbDeposits << ";"
			  << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void Account::_displayTimestamp( void )
{
	std::time_t timestamp = std::time(NULL);
	std::tm* now = std::localtime(&timestamp);
	
	std::cout << std::setfill('0') << "["
			  << now->tm_year + 1900
			  << std::setw(2) << now->tm_mon - 1
			  << std::setw(2) << now->tm_mday << "_"
			  << std::setw(2) << now->tm_hour 
			  << std::setw(2) << now->tm_min 
			  << std::setw(2) << now->tm_sec
			  << "] ";
}


void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";"
			  << "total:" << getTotalAmount() << ";"
			  << "deposits:" << getNbDeposits() << ";"
			  << "withdrawals:" << getNbWithdrawals() << std::endl;
}
