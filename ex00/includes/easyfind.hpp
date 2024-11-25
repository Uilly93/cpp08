#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <stdexcept>

template <typename T>
unsigned int easyfind(T &container, int to_find) {
	unsigned int i = 0;
	for(typename T::iterator it = container.begin(); it != container.end(); it++, i++){
		if(*it == to_find)
			return i;
	}
	throw std::invalid_argument("argument not found");
}

#endif