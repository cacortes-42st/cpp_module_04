/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aanimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 11:56:28 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/09 11:57:41 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>
#include <string>

#include "brain.hpp"

class	AAnimal
{
	protected:
		std::string type;

	public:

		AAnimal();
		AAnimal(const AAnimal &other);
		AAnimal &operator=(const AAnimal &value);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;
		std::string	getType(void) const;
};

#endif