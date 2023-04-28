/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:57:02 by rlaforge          #+#    #+#             */
/*   Updated: 2023/04/29 00:17:39 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook {
	public:
		void Add();
		void Search();
		void Exit();
		void ShowContact(int id);
		void ShowContactLine(int id);
		PhoneBook();							//Constructor
		~PhoneBook();							//Destructor

	private:
		int		CurrentContact;
		Contact ContactList[8];
};
