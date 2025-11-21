/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:20:23 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/21 15:28:20 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>{
public:
	MutantStack() {};
	MutantStack(const MutantStack &src) : std::stack<T>(src) {};
	MutantStack &operator=(const MutantStack &src) {
		if (this != &src)
			std::stack<T>::operator=(src);
		return *this;
	};
	~MutantStack() {};

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator		begin(void) { return this->c.begin(); }
	iterator		end(void) { return this->c.end(); }
	const_iterator	begin(void) const { return this->c.begin(); }
	const_iterator	end(void) const { return this->c.end(); }
};

#endif
