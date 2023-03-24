/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Acount.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abravo <abravo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 21:55:44 by abravo            #+#    #+#             */
/*   Updated: 2023/03/24 22:16:52 by abravo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
}

//Destructor
Account::~Account( void ){
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
   
}

//Setters
	void	makeDeposit( int deposit );
	bool	makeWithdrawal( int withdrawal );
	int		checkAmount( void ) const;
	void	displayStatus( void ) const;
