/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:22:57 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/19 10:40:00 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int	main(void) {
	{
		try {
			std::vector<int>			int_vet(5);
			for (int i = 0; i < 5; i++)
				int_vet[i] = (i * 5);
			std::vector<int>::const_iterator it = easyfind(int_vet, 20);
			std::cout << "Value found " << *it << "!" << std::endl;
		} catch ( std::exception &e ) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	{
		try {
			std::vector<int>			int_vet(5);
			for (int i = 0; i < 5; i++)
				int_vet[i] = (i * 5);
			std::vector<int>::const_iterator it = easyfind(int_vet, 12);
			std::cout << "Value found " << *it << "!" << std::endl;
		} catch ( std::exception &e ) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
}
