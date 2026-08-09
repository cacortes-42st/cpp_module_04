/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 11:31:12 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/09 11:59:00 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "aanimal.hpp"

class Dog : public AAnimal
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