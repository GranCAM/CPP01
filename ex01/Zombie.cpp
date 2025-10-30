/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 19:29:32 by carbon-m          #+#    #+#             */
/*   Updated: 2025/10/30 17:07:41 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name)
{
	std::cout << "Raise, zombie " << this->name << ", you have been resurrected!" << std::endl;
};

Zombie::Zombie(void) 
{
};

Zombie::~Zombie(void)
{
	std::cout << "Begone, " << this->name << ", foul beast!!" << std::endl;
};

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};
