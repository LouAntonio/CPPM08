/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:32:01 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/21 14:53:15 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack &src) : std::stack<T>(src) {}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack &src) : std::stack<T>(src)
{
	if (this != &src)
		std::stack<T>::operator=(src);
	return *this;
}

template <typemane T>
MutantStack::~MutantStack() {}

template <typemane T>
iterator MutantStack<T>::begin(void) {
	return c.begin();
}

template <typemane T>
iterator MutantStack<T>::end(void) {
	return c.end();
}

template <typemane T>
const_iterator MutantStack<T>::begin(void) {
	return c.begin();
}

template <typemane T>
const_iterator MutantStack<T>::end(void) {
	return c.end();
}
