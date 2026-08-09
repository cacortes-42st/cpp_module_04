/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 11:30:57 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/09 11:58:45 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "aanimal.hpp"

class Cat : public AAnimal
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