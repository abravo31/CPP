/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:55:44 by abravo            #+#    #+#             */
/*   Updated: 2023/03/25 23:16:15 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

//Constructor
Account::Account( int initial_deposit ){
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    this->_totalAmount += initial_deposit;
    _nbAccounts++;
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount << ";created" << std::endl;
    return ;
}

//Destructor
Account::~Account( void ){
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount << ";closed\n";
    return ;
}

//Getters

int	Account::getNbAccounts( void ){
    return(_nbAccounts);
}

int	Account::getTotalAmount( void ){
    return(_totalAmount);
}

int	Account::getNbDeposits( void ){
    return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void ){
    return(_totalNbWithdrawals);
}

void	Account::displayAccountsInfos( void ){
    _displayTimestamp();
    std::cout << "accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
    return ;
}

//Setters
void	Account::makeDeposit( int deposit ){
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    std::cout << ";deposits:" << deposit;
    this->_amount += deposit;
    std::cout << ";amount:" << this->_amount;
    _totalAmount += deposit;
    _totalNbDeposits++;
    this->_nbDeposits++;
    std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
    return ;
}

bool	Account::makeWithdrawal( int withdrawal ){
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    if (this->_amount < withdrawal){
        std::cout << ";withdrawal:refused" << std::endl;
        return (false);
    }
    else{
        std::cout << ";withdrawal:" << withdrawal;
        this->_amount -= withdrawal;
        _totalAmount -= withdrawal;
        this->_nbWithdrawals++;
        _totalNbWithdrawals++;
        std::cout << ";amount:" << this->_amount;
        std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return (true);
    }
}

int		Account::checkAmount( void ) const{
    return(this->_amount);
}

void	Account::displayStatus( void ) const{
    this->_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals << std::endl;
    return ; 
}

void	Account::_displayTimestamp( void ){
    time_t t;
    struct tm *infoTime;
    
    time(&t);
    infoTime = localtime(&t);
    std::cout 
        << "[" 
        << infoTime->tm_year + 1900
        << std::setfill('0')
        << std::setw(2) << infoTime->tm_mon + 1
        << std::setw(2) << infoTime->tm_mday << "_"
        << std::setw(2) << infoTime->tm_hour
		<< std::setw(2) << infoTime->tm_min
		<< std::setw(2) << infoTime->tm_sec
        << "]";
}
