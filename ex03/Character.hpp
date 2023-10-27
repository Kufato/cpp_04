/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:16:12 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/23 15:19:02 by axcallet         ###   ########.fr       */
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
#include "ICharacter.hpp"
#include "AMateria.hpp"

class	Character : public ICharacter {

	private:
		std::string	_name;
		AMateria	*_materias[4];
 
	public:
	// Constructors
		Character(const std::string name);
		Character(const Character &toCopy);

	// Destructor
		~Character(void);

	// Overload operator
		Character &operator = (const Character &toCopy);

	// Public methods
		void	equip(AMateria *m);
		void	unequip(int idx);
		void	use(int idx, ICharacter &target);
		void	deleteMateria(int i);

	// Getter
		std::string const	&getName() const;
		const AMateria		*getMateria(int index) const;
};
