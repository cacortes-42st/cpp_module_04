/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:10:52 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/07 17:50:53 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &value);
		~Cat();

		virtual void makeSound() const;

		void setIdea(int index, const std::string &idea);
		std::string getIdea(int index) const;
};

#endif