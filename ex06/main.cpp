
#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "\n" << std::endl;
	harl.complain("DEBUG");
	std::cout << "\n" << std::endl;
	harl.complain("INFO");
	std::cout << "\n" << std::endl;
	harl.complain("WARNING");
	std::cout << "\n" << std::endl;
	harl.complain("ERROR");
	std::cout << "\n" << std::endl;
	harl.complain("pepe");
	return (0);

}