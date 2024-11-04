#include "easyfind.hpp"

int	main()
{
	std::vector<int> vec = {1, 2, 3, 4, 5};
	std::list<int> lst = {10, 20, 30, 40, 50};

	try{
		std::cout << "Tring to find in vector: " << *Easyfind(vec, 3) << std::endl;
        std::cout << "Tring to find in list: " << *Easyfind(lst, 20) << std::endl;
		std::cout << "Tring to find non-exist: " << *Easyfind(vec, 6) << std::endl;
	} catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}
