/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:26:59 by rlaforge          #+#    #+#             */
/*   Updated: 2023/04/27 18:43:37 by rlaforge         ###   ########.fr       */
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

void PhoneBook::Search(void){
	std::cout<< "\n" << "🔍 YOU'RE IN SEARCH MODE 🔍" << std::endl;
	
	for (size_t i = 0; i < 8; i++)
	{
		if (!ContactList[i].GetFirstName().empty())
			PhoneBook::ShowContact(i);
	}
	std::cout<< "\n";
	return;
}