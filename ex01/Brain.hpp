/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:09:14 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/18 13:41:30 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

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
