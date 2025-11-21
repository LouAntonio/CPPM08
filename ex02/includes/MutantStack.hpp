/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 10:20:23 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/21 14:52:35 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>{
public:
	MutantStack();
	MutantStack(const MutantStack &src) : std::stack<T>(src);
	MutantStack &operator=(const MutantStack &src);
	~MutantStack();

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;

	iterator begin(void);
	iterator end(void);

	const_iterator begin(void);
	const_iterator end(void);
};

#include "../src/MutantStack.tpp"

#endif
