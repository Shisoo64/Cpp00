/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:26:59 by rlaforge          #+#    #+#             */
/*   Updated: 2023/05/02 15:06:32 by rlaforge         ###   ########.fr       */
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

std::string EnterNonNullString(){
	std::string Prompt;
	
	while (std::cin && Prompt.empty())
	{
		std::getline(std::cin, Prompt);
		if (Prompt.empty())
			std::cout<< "\e[1;91m⛔ "<< "This value can't be empty, please enter a valid input : "<< "\e[0m";
	}
	return (Prompt);
} 

void Contact::SetVars(void){
	std::cout<< "Enter the first name: ";
	this->FirstName = EnterNonNullString();
	std::cout<< "Enter the last name: ";
	this->LastName = EnterNonNullString();
	std::cout<< "Enter the nickname: ";
	this->NickName = EnterNonNullString();
	std::cout<< "Enter the phone Number: ";
	this->PhoneNumber = EnterNonNullString();
	std::cout<< "Enter the darkest secret: ";
	this->Secret = EnterNonNullString();
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