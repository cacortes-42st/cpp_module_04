/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 11:34:58 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/09 11:34:59 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wronganimal.hpp"

WrongAnimal::WrongAnimal() : type("DefaultAnimal")
{
	std::cout << "Default WrongAnimal named." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	*this = other;
	std::cout << "WrongAnimal copy constructor called." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &value)
{
	if (this != &value)
		type = value.type;

	std::cout << "WrongAnimal copy operator called." << std::endl;

	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}


void WrongAnimal::makeSound() const
{
	std::cout << "Default WrongAnimal sound.." << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return type;
}