/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:38:02 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/19 14:31:01 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span() {
	N = 0;
}

Span::Span(unsigned int value) : N(value) { }

Span::Span(const Span &src) {
	*this = src;
}

Span &Span::operator=(const Span &src) {
	if (this != &src) {
		this->N = src.N;
		this->span = src.span;
	}
	return *this;
}

void	Span::addNumber(int n) {
	if (span.size() == N)
		throw Span::FullSpan();
	if (0) std::cout << "Span recieved value!" << std::endl;
	span.push_back(n);
}

int	Span::shortestSpan(void) {
	if (!span.size() || span.size() == 1)
		throw Span::EmptyOrTooShortSpan();
	return 1;
}

int	Span::longestSpan(void) {
	if (!span.size() || span.size() == 1)
		throw Span::EmptyOrTooShortSpan();
	std::sort(span.begin(), span.end());
	return span[span.size() - 1] - span[0];
}

const char* Span::FullSpan::what() const throw() {
	return "the span is full!";
}

const char* Span::EmptyOrTooShortSpan::what() const throw() {
	return "the span is empty or too short to make the operation!";
}
