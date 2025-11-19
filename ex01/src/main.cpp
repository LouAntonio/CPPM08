/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:48:02 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/19 12:02:43 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

int main(void) {
	{
		try {
			Span	a;
			a.addNumber(1);
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	{
		try {
			Span	a(2);
			a.addNumber(1);
			a.addNumber(2);
			a.addNumber(3);
		} catch (std::exception &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
}
