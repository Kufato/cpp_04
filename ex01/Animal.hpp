/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:46:39 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/17 13:43:39 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#define _END		"\033[0m"
#define _BLACK		"\033[0;30m"
#define _RED		"\033[0;31m"
#define _GREEN		"\033[0;32m"
#define _YELLOW		"\033[0;33m"
#define _BLUE		"\033[0;34m"
#define _PURPLE		"\033[0;35m"
#define _CYAN		"\033[0;36m"

#include <iostream>

class	Animal {
	
	protected:
		std::string	_type;

	public:
	// Constructors
		Animal(void);
		Animal(const Animal &toCopy);
		
	// Destructor
		virtual ~Animal(void);

	// Overload operator
		Animal &operator = (const Animal &toCopy);

	// Public method
		virtual void	makeSound(void) const;

	// Getter
		virtual const std::string	&getType(void) const;
};
