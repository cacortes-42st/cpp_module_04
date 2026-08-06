/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:10:46 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/06 18:49:14 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
#include "brain.hpp"

class	Animal
{
	protected:
		std::string type;

	public:

		Animal();
		Animal(const Animal &other);
		Animal &operator=(const Animal &value);
		virtual ~Animal();

		virtual void makeSound() const;
		std::string	getType(void) const;
};

#endif