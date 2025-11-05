/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:32:19 by carbon-m          #+#    #+#             */
/*   Updated: 2025/11/05 20:47:56 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	
}
Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::~Weapon()
{
	
}
void	Weapon::setType(std::string type)
{
	this->type = type;
}

const std::string	&Weapon::getType()
{
	return (this->type);
}
