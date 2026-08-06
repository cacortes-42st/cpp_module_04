/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:11:34 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/06 19:49:18 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : Animal()
{
	this->brain = new Brain();
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
	delete	this->brain;
	std::cout << "Cat destructor called" << std::endl;
}


void Cat::makeSound() const
{
	std::cout << "Meow!" << std::endl;
}