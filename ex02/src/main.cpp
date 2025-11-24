/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lantonio <lantonio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/21 14:55:02 by lantonio          #+#    #+#             */
/*   Updated: 2025/11/24 11:01:40 by lantonio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MutantStack.hpp"

int main() {
	{	// subject
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		//[...]
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
		std::cout << "---" << std::endl;
	}
	{
		MutantStack<int> m;
		m.push(1);
		m.push(2);
		m.push(3);
		m.push(42);

		std::cout << "Top = " << m.top() << std::endl;
		std::cout << "Size = " << m.size() << std::endl;

		MutantStack<int> n(m);
		MutantStack<int>::iterator i = m.begin();
		MutantStack<int>::iterator j = m.end();
		while (i != j)
		{
			std::cout << *i << " ";
			++i;
		}
		std::cout << std::endl;
		MutantStack<int> o;
		o = n;
		MutantStack<int>::reverse_iterator k = o.rbegin();
		MutantStack<int>::reverse_iterator l = o.rend();
		while (k != l)
		{
			std::cout << *k << " ";
			++k;
		}
		std::cout << std::endl;
	}
}
