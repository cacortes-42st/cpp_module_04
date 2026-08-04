/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 16:42:46 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/04 16:44:08 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Animal named as Cat." << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
	*this = other;
	std::cout << "Cat copy contructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &value)
{
	if (this != &value)
		Animal::operator=(value);

	std::cout << "Cat copy operator called." << std::endl;

	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}