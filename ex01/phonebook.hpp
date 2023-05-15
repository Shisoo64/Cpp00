/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:57:02 by rlaforge          #+#    #+#             */
/*   Updated: 2023/05/15 15:13:49 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook {
	public:
		void Add();
		void Search();
		PhoneBook();							//Constructor
		~PhoneBook();							//Destructor

	private:
		int		CurrentContact;
		Contact ContactList[8];
		void ShowContact(int id);
		void ShowContactLine(int id);
};
