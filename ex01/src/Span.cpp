/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 11:38:02 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/19 14:57:34 by lantonio         ###   ########.fr       */
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
	std::vector<int> tmp = span;

    std::sort(tmp.begin(), tmp.end());

    int minSpan = std::numeric_limits<int>::max();

    for (size_t i = 0; i < tmp.size() - 1; i++) {
        int diff = tmp[i + 1] - tmp[i];
        if (diff < minSpan)
            minSpan = diff;
    }

    return minSpan;
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
