/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcot <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 15:22:34 by gcot              #+#    #+#             */
/*   Updated: 2023/09/17 17:57:25 by gcot             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount= 0;
int Account::_totalNbDeposits= 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit )
{
        _amount = initial_deposit;
        _accountIndex = _nbAccounts;
	_displayTimestamp();
        std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
        _totalAmount += _amount;
        _nbAccounts++;
        _nbWithdrawals = 0;
        _nbDeposits = 0;
}

Account::~Account( void )
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	_nbDeposits++;
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit <<";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits <<"\n";
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	bool	res = false;
	
	_displayTimestamp();
	if (_amount - withdrawal >= 0)
	{
		_nbWithdrawals++;
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawals:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals <<"\n";
		res = true;
		_totalNbWithdrawals++;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
	}
	else
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawals:refused\n";
	return (res);
}

int	Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" <<  _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}

int     Account::getTotalAmount( void )
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

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << "\n";
}

void	Account::_displayTimestamp( void )
{
	std::time_t rawtime;
	std::tm* timeinfo;
	char buffer [80];
	std::time(&rawtime);
	timeinfo = std::localtime(&rawtime);
	std::strftime(buffer,80,"%Y%m%d_%H%M%S",timeinfo);
	std::cout << "[" << buffer << "] ";
}
