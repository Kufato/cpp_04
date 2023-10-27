/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:47:03 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/17 13:50:18 by axcallet         ###   ########.fr       */
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
#include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal {
	
	private:

	public:
	// Constructors
		WrongCat(void);
		WrongCat(const WrongCat &toCopy);

	// Destructor
		~WrongCat(void);

	// Overload operator
		WrongCat &operator = (const WrongCat &toCopy);

	// Public method
		void	makeSound(void) const;

	// Getter
		const std::string	&getType(void) const;
};
