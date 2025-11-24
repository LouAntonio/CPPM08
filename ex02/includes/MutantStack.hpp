/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:20:23 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/21 15:45:22 by lantonio         ###   ########.fr       */
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
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator const_reverse_iterator;

	iterator				begin(void) { return this->c.begin(); }
	iterator				end(void) { return this->c.end(); }

	const_iterator			begin(void) const { return this->c.begin(); }
	const_iterator			end(void) const { return this->c.end(); }

	reverse_iterator		rbegin(void) { return this->c.rbegin(); }
	reverse_iterator		rend(void) { return this->c.rend(); }

	const_reverse_iterator	rbegin(void) const { return this->c.rbegin(); }
	const_reverse_iterator	rend(void) const { return this->c.rend(); }
};

#endif
