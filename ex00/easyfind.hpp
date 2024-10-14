#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

template<typename T>
typename T::iterator Easyfind( T &container, int to_find ){
	res = std::find(container.begin(), container.end(), to_find)
	if (res == container.end())
		throw std::runtime_error("TO_FIND isn't found in the container");
}


#endif /* ******************************************************** EASYFIND_H */