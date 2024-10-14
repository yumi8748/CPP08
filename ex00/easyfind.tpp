#include "easyfind.hpp"

template<typename T>
Easyfind<T>::Easyfind(): res(){

}

template<typename T>
Easyfind<T>::Easyfind( Easyfind const & other ): res(other.src){

}

template<typename T>
Easyfind &		Easyfind<T>::operator=( Easyfind const & other ){
	if (this != &other)
		res = other.res;
	return (*this);
}

template<typename T>
//with"&"->modify the original object directly.avoid unnecessary copying
Easyfind( T &container, int to_find ){
	res = std::find(container.begin(), container.end(), to_find)
	if (to_find == container.end())
		throw std::runtime_error("TO_FIND isn't found in the container");
}

template<typename T>
typename T::iterator Easyfind<T>::get_res(){
	return (res);
}

template<typename T>
Easyfind<T>::~Easyfind(){}