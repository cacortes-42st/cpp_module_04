/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:43:12 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/06 18:47:59 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brain.hpp"

Brain::Brain()
{
	std::cout << "Brain contructor called." << std::endl;
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Brain copy contructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &value)
{
	if (this != &value)
		type = value.type;

	std::cout << "Brain copy operator called." << std::endl;

	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}