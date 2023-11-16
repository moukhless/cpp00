/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 19:54:31 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/16 19:54:47 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:
	AMateria	*arr[4];

public:
	MateriaSource( void );
	MateriaSource( const MateriaSource& materiaSource );
	MateriaSource& operator=( const MateriaSource& materiaSource );
	AMateria* createMateria( std::string const & type );
	void learnMateria( AMateria* );
	~MateriaSource( void );
};

#endif