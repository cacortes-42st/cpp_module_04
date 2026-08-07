/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 17:11:47 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/07 17:55:03 by cacortes         ###   ########.fr       */
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

	delete j;//should not create a leak
	delete i;


	Animal *animals[20];

	for (int i = 0; i < 20; i++)
	{
		if (i < 10)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	for (int j = 0; j < 20; j++)
		delete animals[j];

	std::cout << "\n===== DEEP COPY TEST ====="<< std::endl;

	std::cout << "\n===== DOGS ====="<< std::endl;

	Dog org;

	org.setIdea(0, "Food");

	Dog copy(org);

	org.setIdea(0, "Cats");

	std::cout << org.getIdea(0) << std::endl;
	std::cout << copy.getIdea(0) << std::endl;

	std::cout << "\n===== CATS ====="<< std::endl;
	
	Cat orgs;

	orgs.setIdea(0, "Fish");

	Cat cop(orgs);

	orgs.setIdea(0, "Dogs");

	std::cout << orgs.getIdea(0) << std::endl;
	std::cout << cop.getIdea(0) << std::endl;

	std::cout << "\n===== END ====="<< std::endl;

	return 0;
}