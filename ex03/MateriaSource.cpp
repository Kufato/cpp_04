/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 09:49:40 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/20 14:44:59 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

// Constructors
MateriaSource::MateriaSource(void) {
	std::cout << "MateriaSource constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_materias[i] = NULL;
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &toCopy) {
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		const AMateria	*tmp = toCopy.getMateria(i);
		if (tmp != NULL)
			this->_materias[i] = tmp->clone();
		else
			this->_materias[i] = NULL;
	}
	return ;
}

// Destructor
MateriaSource::~MateriaSource(void) {
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
	return ;
}

// Overload operator
MateriaSource	&MateriaSource::operator=(const MateriaSource &toCopy) {
	if (this == &toCopy)
		return (*this);
	for (int i = 0; i < 4; i++) {
		if (this->_materias[i] != NULL) {
			delete this->_materias[i];
			this->_materias[i] = NULL;
		}
		if (toCopy._materias[i] != NULL)
			this->_materias[i] = toCopy._materias[i]->clone();
	}
	return (*this);
}

// Public methods
void	MateriaSource::learnMateria(AMateria *materia) {
	for (int i = 0; i < 4; i++) {
		if (materia == this->_materias[i])
			return ;
		if (	this->_materias[i] == NULL) {
			this->_materias[i] = materia;
			return ;
		}
	}
	std::cout << _RED << "You already have the maximum number of materia possible" << _END << std::endl;
	delete materia;
	return ;
}

AMateria*	MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; ++i) {
		if (this->_materias[i] != NULL && this->_materias[i]->getType() == type)
			return (this->_materias[i]->clone());
	}
	return (NULL);
}

// Getter
const AMateria	*MateriaSource::getMateria(int index) const {
	return (this->_materias[index]);
}