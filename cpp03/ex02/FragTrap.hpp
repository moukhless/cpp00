/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoukhle <amoukhle@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 19:47:46 by amoukhle          #+#    #+#             */
/*   Updated: 2023/11/02 19:53:13 by amoukhle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{

public:

	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap& fragT);
	FragTrap& operator=( const FragTrap& fragT);

	void highFivesGuys( void );

	~FragTrap( void );

};


#endif