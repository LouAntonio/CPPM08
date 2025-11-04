/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:33:39 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/04 09:25:04 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

bool	isNumeric(std::string str)
{
	return false;
}

template <typename T>
void	easyfind(T mySet, int toFind) {
	int	len = mySet.size();

	if (len == 0)
	{
		std::cerr << "Empty container, impossible to find value!" << std::endl;
		return;
	}
	if (std::isdigit(mySet[0]))
	{
		std::cerr << "Not an integer container, impossible to find value!" << std::endl;
		return;
	}
	for (int i = 0; i < len; i++) {
		if (mySet[i] == toFind)
		{
			std::cout << "Value " << toFind << " founded in position " << i << std::endl;
			return;
		}
	}
	std::cout << "Error: value not found!" << std::endl;
}
