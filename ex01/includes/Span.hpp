/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:47:45 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/20 11:19:53 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <limits>

class Span {
	private:
		unsigned int		N;
		std::vector<int>	span;
	public:
		Span();
		Span(unsigned int value);
		Span(const Span &src);
		Span &operator=(const Span &src);

		void	addNumber(int n);
		void	addRange(int begin, int end);
		void	printSpan(void) const;
		int		longestSpan(void);
		int		shortestSpan(void);

		class FullSpan : public std::exception {
			virtual const char* what() const throw();
		};

		class EmptyOrTooShortSpan : public std::exception {
			virtual const char* what() const throw();
		};
};

#endif
