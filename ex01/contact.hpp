/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 15:14:35 by rlaforge          #+#    #+#             */
/*   Updated: 2023/04/27 16:42:31 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact {
	public:
		void SetVars();
		std::string GetFirstName();
		std::string GetLastName();
		std::string GetNickName();
		std::string GetPhoneNumber();
		std::string GetSecret();
		Contact();					//Constructor
		~Contact();					//Destructor

	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string Secret;
};