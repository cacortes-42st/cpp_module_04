/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:10:05 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/04 17:50:45 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();


	std::cout << "\n===== NORMAL CLASS TEST ====="<< std::endl;
	
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete i;
	delete j;
	delete meta;


	std::cout << "\n===== WRONG CLASS TEST ====="<< std::endl;
	
	const WrongAnimal* wrong = new WrongCat();

	std::cout << wrong->getType() << std::endl;
	wrong->makeSound();

	delete wrong;

	return 0;
}