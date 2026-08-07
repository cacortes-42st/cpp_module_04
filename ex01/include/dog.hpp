/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:11:00 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/07 14:07:58 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &value);
		~Dog();

		virtual void makeSound() const;

		void setIdea(int index, const std::string &idea);
		std::string getIdea(int index) const;
};

#endif