/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 18:16:00 by rlaforge          #+#    #+#             */
/*   Updated: 2023/05/02 18:27:07 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account(){
	return;
}

Account::~Account(){
	return;
}

static int	Account::getNbAccounts( void ){
	return (this->_nbAccounts);
}

Account::displayAccountsInfos(){
	
}