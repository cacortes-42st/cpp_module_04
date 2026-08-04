/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/04 17:23:21 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/04 18:17:21 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class	WrongAnimal
{
	protected:
		std::string type;

	public:

		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &value);
		virtual ~WrongAnimal();

		void makeSound() const;
		std::string	getType(void) const;
};

#endif