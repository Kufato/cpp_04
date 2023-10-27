/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 14:09:08 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/18 13:10:42 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

// Constructors
Brain::Brain(void) {
	std::cout << "Brain constructor called" << std::endl;\
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = "Not exactly a revolutionary idea";
	return ;
}

Brain::Brain(const Brain &toCopy) {
	std::cout << "Brain copy constructor called" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->_ideas[i] = toCopy._ideas[i];
	}
	return ;
}

// Destructor
Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

// Overload operator
Brain& Brain::operator=(const Brain &toCopy) {
	if (this == &toCopy)
		return (*this);
	for (int i = 0; i <= 100; i++)
		this->_ideas[i] = toCopy._ideas[i];
	return (*this);
}

// Getter
const std::string	&Brain::getIdea(int index) const {
	return (this->_ideas[index]);
}

// Setter
void	Brain::setIdea(int index, std::string newIdea) {
	this->_ideas[index] = newIdea;
	return ;
}