/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 14:57:02 by rlaforge          #+#    #+#             */
/*   Updated: 2023/04/26 15:17:10 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

class PhoneBook {
	public:
		void Add();
		void Search();
		void Exit();
		PhoneBook();							//Constructor
		~PhoneBook();							//Destructor

	private:
		Contact ContactList[8];
};
