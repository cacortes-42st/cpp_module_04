/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 13:23:28 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/04 14:31:11 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal
{
	public:

		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &value);
		~Dog();

		virtual void makeSound() const;
};

#endif