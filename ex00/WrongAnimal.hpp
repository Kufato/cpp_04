/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:46:55 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/17 14:01:53 by axcallet         ###   ########.fr       */
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

class	WrongAnimal {
	
	protected:
		std::string	_type;

	public:
	// Constructors
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &toCopy);

	// Destructor
		virtual ~WrongAnimal(void);

	// Overload operator
		WrongAnimal &operator = (const WrongAnimal &toCopy);

	// Public method
		void	makeSound(void) const;

	// Getter
		const std::string	&getType(void) const;
};
