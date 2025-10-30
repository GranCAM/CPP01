/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 15:47:34 by carbon-m          #+#    #+#             */
/*   Updated: 2025/10/30 17:15:51 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	int		i;
	Zombie	*horde;
	
	horde = new Zombie[N];
	for (i = N - 1; i >= 0; --i)
		horde[i] = *newZombie(name);
	return (horde);
};