/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:47:02 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/17 10:46:38 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class	Dog : public Animal {
	
	private:

	public:
	// COnstructor
		Dog(void);
		Dog(const Dog &toCopy);

	// Destructor
		~Dog(void);

	// Overload operator
		Dog &operator = (const Dog &toCopy);

	// Public method
		void	makeSound(void) const;

	// Getter
		const std::string	&getType(void) const;
};
