/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:26:59 by rlaforge          #+#    #+#             */
/*   Updated: 2023/04/29 00:27:03 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>
#include <iomanip>

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
	std::cout<< "Your FirstName : "<< this->ContactList[id].GetFirstName() << std::endl;
	std::cout<< "Your LastName : "<< this->ContactList[id].GetLastName() << std::endl;
	std::cout<< "Your NickName : "<< this->ContactList[id].GetNickName() << std::endl;
}

std::string FormatString(std::string str)
{
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
	{
		if (!ContactList[i].GetFirstName().empty())
			PhoneBook::ShowContactLine(i);
	}
	std::cout<< "\n";
	return;
}