/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:08:00 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/18 14:28:27 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class	Cure : public AMateria {
	
	private:

	public:
	// Constructors
		Cure(void);
		Cure(const Cure &toCopy);

	// Destructor
		~Cure(void);

	// Overload operator
		Cure &operator = (const Cure &toCopy);

	// Public method
		AMateria	*clone(void) const;
		void 		use(ICharacter &target);
};
