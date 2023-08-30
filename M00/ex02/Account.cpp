/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamasson <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/13 14:10:26 by lamasson          #+#    #+#             */
/*   Updated: 2023/08/30 21:31:13 by lamasson         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <iostream>
#include <ctime>

int		Account::_nbAccounts = 0;
int		Account::_totalAmount = 0;
int		Account::_totalNbDeposits = 0;
int		Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_nbAccounts << ";amount:" << initial_deposit;
	std::cout << ";created" << std::endl;
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	this->_totalAmount = this->_totalAmount + initial_deposit;
}

Account::~Account(void) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";closed" << std::endl;
}

int		Account::getNbAccounts(void) {
	return (_nbAccounts);
}

int		Account::getTotalAmount(void) {
	return (_totalAmount);
}

int		Account::getNbDeposits(void) {
	return (_totalNbDeposits);
}

int		Account::getNbWithdrawals(void) {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount = this->_amount + deposit;
	std::cout << ";deposit:" << deposit << ";amount:" << this->_amount;
	this->_nbDeposits++;
	std::cout << ";nb_deposits:"<< this->_nbDeposits << std::endl;
	this->_totalAmount = this->_totalAmount + deposit;
	this->_totalNbDeposits += this->_nbDeposits;
}

bool	Account::makeWithdrawal(int withdrawal) {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	std::cout << ";withdrawal:";
	if (this->_amount - withdrawal < 0)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount = this->_amount - withdrawal;
	std::cout << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:";
	this->_nbWithdrawals++;
	std::cout << this->_nbWithdrawals << std::endl;
	this->_totalNbWithdrawals++;
	this->_totalAmount = this->_totalAmount - withdrawal;
	return (true);
}

int		Account::checkAmount(void) const {
	return (this->_amount);
}

void	Account::displayStatus(void) const {
	this->_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp(void) {
	std::time_t	tt = std::time(nullptr);
	struct	tm	*time = std::localtime(&tt);
	
	std::cout << "[" << std::put_time(time, "%Y%m%d_%H%M%S") <<  "] ";
}
