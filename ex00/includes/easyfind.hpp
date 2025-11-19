/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:22:06 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/19 10:37:09 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <iterator>

template <typename T>
typename T::const_iterator	easyfind(const T& myContainer, int toFind);

#include "../src/easyfind.tpp"

#endif
