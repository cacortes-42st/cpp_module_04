/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 11:32:27 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/09 12:31:35 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cat.hpp"

Cat::Cat() : AAnimal()
{
	this->brain = new Brain();
	type = "Cat";
	std::cout << "AAnimal named as Cat." << std::endl;
}

Cat::Cat(const Cat &other) : AAnimal()
{
	brain = new Brain(*other.brain);
	this->type = other.type;
	std::cout << "Cat copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &value)
{
	if (this != &value)
	{
		AAnimal::operator=(value);

		delete brain;
		brain = new Brain(*value.brain);
	}
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

void Cat::setIdea(int index, const std::string &idea)
{
	brain->setIdea(index, idea);
}

std::string Cat::getIdea(int index) const
{
	return (brain->getIdea(index));
}