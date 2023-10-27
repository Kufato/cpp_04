/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:47:02 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/23 17:04:19 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class	Dog : public Animal {
	
	private:
		Brain	*brain;

	public:
	// Constructors
		Dog(void);
		Dog(const Dog &toCopy);

	// Destructor
		~Dog(void);

	// Overload operator
		Dog &operator = (const Dog &toCopy);

	// Public method
		void	makeSound(void) const;

	// Getters
		const std::string	&getType(void) const;
		const std::string	&getBrainIdea(int index) const ;

	// Setter
		void	setBrainIdea(int index, const std::string &newIdea);
};
