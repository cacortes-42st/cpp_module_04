/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:23:42 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/04 18:17:27 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "wronganimal.hpp"

class WrongCat : public WrongAnimal
{
	public:

		WrongCat();
		WrongCat(const WrongCat &other);
		WrongCat &operator=(const WrongCat &value);
		~WrongCat();

		void makeSound() const;
};

#endif