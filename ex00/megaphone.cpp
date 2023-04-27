/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlaforge <rlaforge@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:41:57 by rlaforge          #+#    #+#             */
/*   Updated: 2023/04/24 14:47:46 by rlaforge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(int ac, char **av)
{
	for (int i = 1; i < ac; i++ )
	{
		std::string str = av[i];
		for (size_t x = 0; x < str.size(); x++ )
			std::cout<< (unsigned char)toupper(str[x]);
	}
	std::cout<< "\n";
	return (0);
}
