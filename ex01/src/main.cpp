/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:48:02 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/20 11:49:41 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int main(void) {
	{ // subject
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << "---" << std::endl;
	}
	{ // Error - trying to add into a no space span
		try {
			Span	a;
			a.addNumber(1);
			std::cout << "---" << std::endl;
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			std::cout << "---" << std::endl;
		}
	}
	{ // Error - trying to add a 3rd element in a span with 2 pos
		try {
			Span	a(2);
			a.addNumber(1);
			a.addNumber(2);
			a.addNumber(3);
			std::cout << "---" << std::endl;
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			std::cout << "---" << std::endl;
		}
	}
	{ // Error - impossible to find shortest when size is 0
		try {
			Span	a(5);

			std::cout << a.shortestSpan() << std::endl;
			std::cout << "---" << std::endl;
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			std::cout << "---" << std::endl;
		}
	}
	{ // Error - impossible to find shortest when size is 1
		try {
			Span	a(5);
			a.addNumber(2);

			std::cout << a.shortestSpan() << std::endl;
			std::cout << "---" << std::endl;
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			std::cout << "---" << std::endl;
		}
	}
	{
		try {
			Span	a(5);
			a.addNumber(2);
			a.addNumber(3);
			a.addNumber(5);
			a.addNumber(1);
			a.addNumber(4);

			std::cout << a.shortestSpan() << std::endl;
			std::cout << "---" << std::endl;
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			std::cout << "---" << std::endl;
		}
	}
	{
		try {
			Span	a(5);
			a.addNumber(2);
			a.addNumber(3);
			a.addNumber(5);
			a.addNumber(1);
			a.addNumber(4);

			std::cout << a.longestSpan() << std::endl;
			std::cout << "---" << std::endl;
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			std::cout << "---" << std::endl;
		}
	}
	{
		try {
			Span	a(5);
			int	begin = 0, end = 4;
			a.addRange(begin, end);
			a.printSpan();
			std::cout << "---" << std::endl;
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
			std::cout << "---" << std::endl;
		}
	}
}
