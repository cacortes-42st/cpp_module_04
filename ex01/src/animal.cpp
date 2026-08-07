/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:11:27 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/07 17:59:11 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"

Animal::Animal() : type("DefaultAnimal")
{
	std::cout << "Default Animal named." << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
	std::cout << "Animal copy constructor called." << std::endl;
}

Animal &Animal::operator=(const Animal &value)
{
	if (this != &value)
		type = value.type;

	std::cout << "Animal copy operator called." << std::endl;

	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}


void Animal::makeSound() const
{
	std::cout << "Default Animal sound.." << std::endl;
}

std::string	Animal::getType(void) const
{
	return type;
}