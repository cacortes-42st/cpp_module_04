/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:11:41 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/07 17:59:24 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dog.hpp"

Dog::Dog() : Animal()
{
	this->brain = new Brain();
	type = "Dog";
	std::cout << "Animal named as Dog." << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other)
{
	brain = new Brain(*other.brain);
	this->type = other.type;
	std::cout << "Dog copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &value)
{
	if (this != &value)
	{
		Animal::operator=(value);

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