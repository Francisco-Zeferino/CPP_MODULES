/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffilipe- <ffilipe-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:47:17 by ffilipe-          #+#    #+#             */
/*   Updated: 2023/12/04 11:03:00 by ffilipe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iomanip>
#include <ctime>
#include <iostream>
#include <string>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::displayAccountsInfos(void)
{
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::displayStatus(void) const
{
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit << ";deposit:" << deposit << ";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if(withdrawal > this->_amount)
    {
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else
    {
        this->_amount -= withdrawal;
        _nbWithdrawals++;
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return (true);
    }
}

Account::Account(int initial_deposit)
{
    this->_accountIndex = this->_nbAccounts;
    this->_nbAccounts++;
    _nbDeposits = 0;
    this->_totalAmount += initial_deposit;
    this->_amount = initial_deposit;
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
    std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
    return (_nbAccounts);
}

int Account::getTotalAmount()
{
    return (_totalAmount);
}

int Account::getNbDeposits()
{
    return (_totalNbDeposits);
}

int  Account::getNbWithdrawals()
{
    return (_totalNbWithdrawals);
}

// int main(void)
// {
//     Account a(42);
//     Account b(54);
//     Account c(957);
//     Account d(432);
//     Account e(1234);
//     Account f(0);
//     Account g(754);
//     Account h(16576);
//     Account::displayAccountsInfos();
//     a.makeDeposit(5);
//     b.makeDeposit(10);
//     Account::displayAccountsInfos();
//     a.makeWithdrawal(10);
//     b.makeWithdrawal(765);
//     Account::displayAccountsInfos();
    
// }
