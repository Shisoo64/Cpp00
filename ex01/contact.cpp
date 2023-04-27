/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:26:59 by rlaforge          #+#    #+#             */
/*   Updated: 2023/04/27 18:13:55 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include <iostream>

Contact::Contact(){
	return;
}

Contact::~Contact(){
	return;
}

void Contact::SetVars(void){
	std::cout<< "Enter the first name: ";
	std::getline(std::cin, this->FirstName);
	std::cout<< "Enter the last name: ";
	std::getline(std::cin, this->LastName);
	std::cout<< "Enter the nickname: ";
	std::getline(std::cin, this->NickName);
	std::cout<< "Enter the phone Number: ";
	std::getline(std::cin, this->PhoneNumber);
	std::cout<< "Enter the darkest secret: ";
	std::getline(std::cin, this->Secret);
	return;
}

std::string Contact::GetFirstName(void){
	return (this->FirstName);
}

std::string Contact::GetLastName(void){
	return (this->LastName);
}

std::string Contact::GetNickName(void){
	return (this->NickName);
}

std::string Contact::GetPhoneNumber(void){
	return (this->PhoneNumber);
}

std::string Contact::GetSecret(void){
	return (this->Secret);
}