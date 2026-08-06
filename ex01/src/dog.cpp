/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:11:41 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/06 17:11:42 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	std::cout << "Animal named as Dog." << std::endl;
}

Dog::Dog(const Dog &other) : Animal()
{
	*this = other;
	std::cout << "Dog copy contructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &value)
{
	if (this != &value)
		Animal::operator=(value);

	std::cout << "Dog copy operator called." << std::endl;

	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}


void Dog::makeSound() const
{
	std::cout << "Guau!" << std::endl;
}