#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>
# include <list>

template<typename T>
typename T::iterator Easyfind( T &container, int to_find ){
	typename T::iterator res = std::find(container.begin(), container.end(), to_find);
	if (res == container.end())
	{
		throw std::runtime_error("TO_FIND isn't found in the container.");
	}
	return (res);
}


#endif /* ******************************************************** EASYFIND_H */