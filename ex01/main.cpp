/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gautierchauvot <gautierchauvot@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 11:20:22 by gchauvot          #+#    #+#             */
/*   Updated: 2025/02/19 17:58:51 by gautierchau      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

#define SAIZE 50

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal* p;
	const Animal* table[SAIZE];

	for(int k=0; k < SAIZE; k++)
	{
		if (k % 2 == 0)
		{
			table[k] = new Dog();
		}
		else
		{
			table[k] = new Cat();
		}
	}
	for(int k=0; k < SAIZE; k++)
	{
		delete table[k];
	}
	p = i;

	delete p;
	delete j;//should not create a leak
	delete i;
	// std::cout << i->getType() << j->getType()<<std::endl;
	return 0;
}