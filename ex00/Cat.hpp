/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:46:52 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/17 10:46:26 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Animal.hpp"

class	Cat : public Animal {
	
	private:

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

	// Getter
		const std::string	&getType(void) const;
};
