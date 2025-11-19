/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:47:45 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/04 13:15:55 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>

class Span {
	private:
		unsigned int		n;
		std::vector<int>	span;
	public:
		Span();
		Span(unsigned int value);
		Span(const Span &src);
		Span &operator=(const Span &src);

		void	addNumber(void);
		Span	shortestSpan(void);
		Span	longestSpan(void);

		class FullSpan : public std::exception {
			virtual const char* what() const throw();
		};

		class EmptySpan : public std::exception {
			virtual const char* what() const throw();
		};
};

#endif
