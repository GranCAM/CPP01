/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carbon-m <carbon-m@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 14:59:40 by carbon-m          #+#    #+#             */
/*   Updated: 2025/10/30 17:17:29 by carbon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*horde;
	
	std::cout << std::endl;
	std::cout << "There are rumblings at the cementery..." << std::endl;
	std::cout << std::endl;

	std::cout << "Lets raisee an army..." << std::endl;
	Zombie* zombie1 = newZombie("Pepe");
	Zombie* zombie2 = newZombie("Paco");
	Zombie* zombie3 = newZombie("Hermenegildo");
	std::cout << std::endl;
	
	std::cout << "Hail me, my horde!" << std::endl;
	zombie1->announce();
	zombie2->announce();
	zombie3->announce();
	std::cout << std::endl;

	std::cout << "Need more Hermenegildos, those zombs rocks..." << std::endl;
	horde = zombieHorde(5, "Hermenegildo");
	std::cout << std::endl;

	std::cout << "Bunch of dumdums" << std::endl;
	delete zombie1;
	delete zombie2;
	delete zombie3;
	delete[] horde;
	std::cout << std::endl;
	
	std::cout << "I think i'll stick to alchemy as my parents told me..." << std::endl;
	std::cout << std::endl;
	return (0);
}
