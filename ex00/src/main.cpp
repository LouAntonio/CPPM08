/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:22:57 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/03 14:46:34 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int	main(void) {
	std::vector<int>			int_vet(5);
	std::vector<std::string>	str_vet(5);

	easyfind(int_vet, 12);
	for (int i = 0; i < 5; i++)
		int_vet[i] = i * 5;
	easyfind(int_vet, 12);
	return 0;
}
