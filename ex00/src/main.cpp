/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/03 17:10:05 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/11 12:37:12 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int main()
{
	std::cout << "\n===== NORMAL CLASS TEST ====="<< std::endl;
	
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	std::cout << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	
	std::cout << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << "\n===== END ====="<< std::endl;
	
	delete i;
	delete j;
	delete meta;


	std::cout << "\n===== WRONG CLASS TEST ====="<< std::endl;
	
	const WrongAnimal* wrong = new WrongCat();

	std::cout << std::endl;
	std::cout << wrong->getType() << std::endl;

	std::cout << std::endl;
	wrong->makeSound();

	std::cout << "\n===== END ====="<< std::endl;
	
	delete wrong;

	
	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "\n===== EXTRA TESTS ====="<< std::endl;

	std::cout << "\n===== test 1 ====="<< std::endl;
	
	Animal	animal;
	Animal copy(animal);

	copy.makeSound();

	std::cout << std::endl;

	
	std::cout << "\n===== test 2 ====="<< std::endl;
	
	Dog dog1;
	Dog dog2(dog1);

	std::cout << std::endl;

	
	std::cout << "\n===== test 3 ====="<< std::endl;
	
	Cat cat1;
	Cat cat2;

	cat2 = cat1;

	std::cout << "\n===== END ====="<< std::endl;

	return 0;
}