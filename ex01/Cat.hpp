/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:46:52 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/18 13:40:57 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class	Cat : public Animal {
	
	private:
		Brain	*brain;

	public:
	// Constructors
		Cat(void);
		Cat(const Cat &toCopy);

	// Destructor
		~Cat(void);

	// Overload operator
		Cat &operator = (const Cat &toCopy);

	// Public method
		void	makeSound(void) const;

	// Getters
		const std::string	&getType(void) const;
		const std::string	&getBrainIdea(int index) const ;

	// Setter
		void	setBrainIdea(int index, const std::string &newIdea);
};
