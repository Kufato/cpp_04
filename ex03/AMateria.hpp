/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:01:24 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/20 11:00:43 by axcallet         ###   ########.fr       */
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

class ICharacter;

class	AMateria {
	
	protected:
		std::string	_type;
		bool		_isEquip;

	public:
	// Constructors
		AMateria(void);
		AMateria(const std::string &type);
		AMateria(const AMateria &toCopy);

	// Destructor
		virtual ~AMateria(void);

	// Overload operator
		AMateria &operator = (const AMateria &toCopy);

	// Public methods
		virtual AMateria	*clone() const = 0;
		virtual void 		use(ICharacter &target);

	// Getter
		const std::string	getType(void) const;
		bool			getIsEquip(void) const;

	// Setter
		void	setIsEquip(void);
};
