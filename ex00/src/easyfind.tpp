/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:33:39 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/19 10:37:07 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

template <typename T>
typename T::const_iterator easyfind(const T &myContainer, int toFind)
{
	typename T::const_iterator it = std::find(myContainer.begin(), myContainer.end(), toFind);

	if (it == myContainer.end())
		throw std::runtime_error("Value not found");
	return it;
}
