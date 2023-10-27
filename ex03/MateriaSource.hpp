/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:49:45 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/19 11:42:27 by axcallet         ###   ########.fr       */
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
#include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {
	
	private:
		AMateria	*_materias[4];

	public:
	// Constructors
		MateriaSource(void);
		MateriaSource(const MateriaSource &toCopy);

	// Destructor
		~MateriaSource(void);

	// Overload operator
		MateriaSource &operator = (const MateriaSource &toCopy);

	// Public methods
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const &type);

	// Getter
		const AMateria	*getMateria(int index) const;
};
