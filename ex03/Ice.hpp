/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:07:56 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/18 14:28:09 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AMateria.hpp"

class	Ice : public AMateria {
	
	private:

	public:
	// Constructors
		Ice(void);
		Ice(const Ice &toCopy);

	// Destructor
		~Ice(void);

	// Overload operator
		Ice &operator = (const Ice &toCopy);

	// Public method
		AMateria	*clone(void) const;
		void 		use(ICharacter &target);
};
