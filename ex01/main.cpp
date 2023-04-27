/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:41:57 by rlaforge          #+#    #+#             */
/*   Updated: 2023/04/27 18:16:21 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <iostream>

int main()
{
	PhoneBook Book;
	std::string Prompt;
	std::cout<< "📞 WELCOME TO THE ROMIL PHONEBOOK 📖"<< "\n\n";
	while (std::cin)
	{
		std::cout<< "Type a command: " << "\n";
		std::getline(std::cin, Prompt);
		if (Prompt == "ADD")
			Book.Add();
		else if (Prompt == "SEARCH")
			Book.Search();
		else if (Prompt == "EXIT")
			return (0);
		else if (!Prompt.empty())
			std::cout<< "\e[1;91m⛔ "<< Prompt<< " is not a valid command."<< "\e[0m\n\n";
		Prompt.clear();
	}
	return (1);
}
