/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:09:14 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/18 13:05:29 by axcallet         ###   ########.fr       */
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

class	Brain {
	
	private:
		std::string	_ideas[100];

	public:
	// Constructors
		Brain(void);
		Brain(const Brain &toCopy);

	// Destructor
		~Brain(void);

	// Overload operator
		Brain &operator = (const Brain &toCopy);

	// Setter
		void	setIdea(int index, std::string newIdea);

	// Getter
		const std::string &getIdea(int index) const;
};
