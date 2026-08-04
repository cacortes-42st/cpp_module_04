/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:24:59 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/04 17:50:02 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongcat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat";
	std::cout << "WrongAnimal named as WrongCat." << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	*this = other;
	std::cout << "WrongCat copy contructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &value)
{
	if (this != &value)
		WrongAnimal::operator=(value);

	std::cout << "WrongCat copy operator called." << std::endl;

	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}


void WrongCat::makeSound() const
{
	std::cout << "Mea$%&" << std::endl;
}