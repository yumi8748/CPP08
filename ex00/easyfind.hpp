#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>

template<typename T>
class Easyfind
{

	public:

		Easyfind();
		Easyfind( T &container, int to_find );
		Easyfind &		operator=( Easyfind const & other );
		Easyfind( Easyfind const & other );
		Easyfind T::iterator get_res();
		~Easyfind();

	private:
		typename T::interator res;
};

# include "easyfind.tpp"

#endif /* ******************************************************** EASYFIND_H */