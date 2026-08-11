/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:11:47 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/11 12:48:29 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animal.hpp"
#include "dog.hpp"
#include "cat.hpp"
#include "wronganimal.hpp"
#include "wrongcat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	std::cout << std::endl;

	
	std::cout << "\n===== DEFAULT TEST ====="<< std::endl;
	
	Animal *animals[20];

	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	std::cout << "\n===== END ====="<< std::endl;

	for (int j = 0; j < 20; j++)
		delete animals[j];

	
	std::cout << std::endl;	
		
	std::cout << "\n===== DEEP COPY TEST ====="<< std::endl;

	std::cout << "\n===== DOGS ====="<< std::endl;

	Dog one;

	one.setIdea(0, "Food");

	Dog onecopy(one);

	one.setIdea(0, "Cats");

	std::cout << one.getIdea(0) << std::endl;
	std::cout << onecopy.getIdea(0) << std::endl;

	
	std::cout << "\n===== CATS ====="<< std::endl;
	
	Cat two;

	two.setIdea(0, "Fish");

	Cat twocopy(two);

	two.setIdea(0, "Dogs");

	std::cout << two.getIdea(0) << std::endl;
	std::cout << twocopy.getIdea(0) << std::endl;

	std::cout << "\n===== END ====="<< std::endl;

	return 0;
}