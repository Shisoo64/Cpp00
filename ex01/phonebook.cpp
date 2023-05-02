/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:26:59 by rlaforge          #+#    #+#             */
/*   Updated: 2023/05/02 15:16:53 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

PhoneBook::PhoneBook(){
	CurrentContact = 0;
	return;
}

PhoneBook::~PhoneBook(){
	return;
}

void PhoneBook::Add(void){
	std::cout<< "\n" << "📝 YOU'RE IN ADD MODE 📝" << std::endl;

	this->ContactList[CurrentContact++].SetVars();
	if (CurrentContact >= 8)
		CurrentContact = 0;

	std::cout<< std::endl;
	return;
}

void PhoneBook::ShowContact(int id){
	std::cout<< std::setw(10);
	std::cout<< "First name: "<< this->ContactList[id].GetFirstName() << std::endl;
	std::cout<< "Last name: "<< this->ContactList[id].GetLastName() << std::endl;
	std::cout<< "Nickname: "<< this->ContactList[id].GetNickName() << std::endl;
	std::cout<< "Phone number: "<< this->ContactList[id].GetPhoneNumber() << std::endl;
	std::cout<< "Darkest secret: "<< this->ContactList[id].GetSecret() << "\n" << std::endl;
}

std::string FormatString(std::string str){
    if (str.length() > 9)
            return str.substr(0, 9) + ".";
    return str;
}

void PhoneBook::ShowContactLine(int id){
	std::cout<< "|";
	std::cout<< std::setw(10)<< id;
	std::cout<< "|";
	std::cout<< std::setw(10)<< FormatString(this->ContactList[id].GetFirstName());
	std::cout<< "|";
	std::cout<< std::setw(10)<< FormatString(this->ContactList[id].GetLastName());
	std::cout<< "|";
	std::cout<< std::setw(10)<< FormatString(this->ContactList[id].GetNickName())<< "|" << std::endl;
}

void PhoneBook::Search(void){
	std::cout<< "\n" << "🔍 YOU'RE IN SEARCH MODE 🔍" << std::endl;
	
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
	for (size_t i = 0; i < 8; i++)
		if (!ContactList[i].GetFirstName().empty())
			PhoneBook::ShowContactLine(i);
	std::cout << "└───────────────────────────────────────────┘" << std::endl;
	std::cout<< "\n";
	
	std::string Prompt;

	std::cout << "Enter an index: ";
	std::getline(std::cin, Prompt);
    std::cout << std::endl;
	if (Prompt.length() == 1 && Prompt[0] <= '7' && Prompt[0] >= '0')
		PhoneBook::ShowContact(std::atoi(Prompt.c_str()));
	else
		std::cout<< "\e[1;91m⛔ "<< "Wrong index"<< "\e[0m"<< std::endl;
	return;
}