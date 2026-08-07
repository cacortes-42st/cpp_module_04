/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:43:12 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/07 17:59:13 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called." << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain copy constructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &value)
{
	for (int i = 0; i < 100; i++)
		ideas[i] = value.ideas[i];
	std::cout << "Brain copy operator called." << std::endl;

	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}


void Brain::setIdea(int index, const std::string &idea)
{
	if (index >= 0 && index < 100)
		ideas[index] = idea;
}

std::string Brain::getIdea(int index) const
{
	if (index >= 0 && index < 100)
		return (ideas[index]);
	return ("");
}