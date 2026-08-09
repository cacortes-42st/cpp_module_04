/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 11:32:38 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/09 12:31:41 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : AAnimal()
{
	this->brain = new Brain();
	type = "Dog";
	std::cout << "AAnimal named as Dog." << std::endl;
}

Dog::Dog(const Dog &other) : AAnimal(other)
{
	brain = new Brain(*other.brain);
	this->type = other.type;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &value)
{
	if (this != &value)
	{
		AAnimal::operator=(value);

		delete brain;
		brain = new Brain(*value.brain);
	}

	std::cout << "Dog copy operator called." << std::endl;

	return *this;
}

Dog::~Dog()
{
	delete	this->brain;
	std::cout << "Dog destructor called" << std::endl;
}


void Dog::makeSound() const
{
	std::cout << "Guau!" << std::endl;
}

void Dog::setIdea(int index, const std::string &idea)
{
	brain->setIdea(index, idea);
}

std::string Dog::getIdea(int index) const
{
	return (brain->getIdea(index));
}