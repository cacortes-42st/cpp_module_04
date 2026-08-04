/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 16:41:48 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/04 16:42:24 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "animal.hpp"

class Cat : public Animal
{
	public:

		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &value);
		~Cat();

		virtual void makeSound() const;
};

#endif