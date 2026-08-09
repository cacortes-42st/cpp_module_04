/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aanimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 11:59:36 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/09 12:00:29 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aanimal.hpp"

AAnimal::AAnimal() : type("DefaultAnimal")
{
	std::cout << "Default AAnimal named." << std::endl;
}

AAnimal::AAnimal(const AAnimal &other)
{
	*this = other;
	std::cout << "AAnimal copy constructor called." << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &value)
{
	if (this != &value)
		type = value.type;

	std::cout << "AAnimal copy operator called." << std::endl;

	return *this;
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}


void AAnimal::makeSound() const
{
	std::cout << "Default AAnimal sound.." << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return type;
}