/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cacortes <cacortes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:18:11 by cacortes          #+#    #+#             */
/*   Updated: 2026/08/07 14:03:58 by cacortes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain &other);
		Brain &operator=(const Brain &value);
		virtual ~Brain();

	    void setIdea(int index, const std::string &idea);
		std::string getIdea(int index) const;
};

#endif