/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mskerba <mskerba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 05:52:05 by mskerba           #+#    #+#             */
/*   Updated: 2022/11/21 11:13:30 by mskerba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit ):_amount(initial_deposit),_nbDeposits(0),_nbWithdrawals(0)
{
    _displayTimestamp();
    _accountIndex = _nbAccounts;
    std::cout << "index:" << _nbAccounts++ ;
    std::cout << ";amount:" << _amount  << ";created\n";
    _totalAmount += _amount;
}

Account::Account(void){
};

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << "index:" << --_nbAccounts;
    std::cout << ";amount:" << _amount  <<";closed\n";
};

void    Account::makeDeposit( int deposit )
{
    _displayTimestamp();
    if(deposit)
        _nbDeposits = 1;
    std::cout << "index:" << _totalNbDeposits++;
    std::cout << ";p_amount:" << _amount;
    std::cout << ";deposit:"<< deposit;
    _amount += deposit;
    std::cout << ";amount:" << _amount;
    std::cout << ";nb_deposits:"<< _nbDeposits << std::endl;
    _totalAmount += deposit;
}

bool    Account::makeWithdrawal( int withdrawal )
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << _amount;
    if(_amount - withdrawal < 0)
    {
        _nbWithdrawals = 0;
        std::cout << ";withdrawal:" << "refused\n";
        return (false);
    }
    std::cout <<";withdrawal:" << withdrawal;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    std::cout << ";amount:" << _amount;
    _nbWithdrawals = 1;
    std::cout << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
    _totalAmount -= withdrawal;
    return (true);
}

void    Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts;
    std::cout << ";total:" <<  getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
}

void    Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout <<";deposits:"<< _nbDeposits;
    std::cout << ";withdrawals:" << _nbWithdrawals <<std::endl;
}

int Account::checkAmount(void) const
{
    if(_amount)
        return (1);
    return (0);
}

void    Account::_displayTimestamp(void)
{
    time_t now;

    now = time(0);
    tm *l_time = localtime(&now);
    std::cout << "[";
    std::cout << 1900 + l_time->tm_year;
    std::cout << 1 + l_time->tm_mon;
    std::cout << l_time->tm_mday ;
    std::cout << "_";
    std::cout << 5 + l_time->tm_hour;
    std::cout << 30 + l_time->tm_min ;
    std::cout << l_time->tm_sec ;
    std::cout << "] ";
}

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}
