/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:38:02 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/19 12:02:15 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span() {
	_size = 0;
}

Span::Span(unsigned int value) : _size(value) { }

Span::Span(const Span &src) {
	*this = src;
}

Span &Span::operator=(const Span &src) {
	if (this != &src) {
		this->_size = src._size;
		this->span = src.span;
	}
	return *this;
}

void	Span::addNumber(int n) {
	if (span.size() == _size)
		throw Span::FullSpan();
	if (1) std::cout << "Span recieved value!" << std::endl;
	span.push_back(n);
}

const char* Span::FullSpan::what() const throw() {
	return "the Span is full!";
}
