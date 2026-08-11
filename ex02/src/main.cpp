/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/09 11:34:49 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/11 13:11:22 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aanimal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int main()
{
	std::cout << "\n===== GOOD ABSTRACT TEST ====="<< std::endl;

	Dog dogy;
	Cat	mittens;
	
	AAnimal* a1 = &dogy;
	AAnimal* a2 = &mittens;

	a1->makeSound();
	a2->makeSound();


	/*std::cout << "\n===== BAD ABSTRACT TEST ====="<< std::endl;

	AAnimal max;

	max->makeSound();*/

	std::cout << "\n===== END ====="<< std::endl;

	return 0;
}