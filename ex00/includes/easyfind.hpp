#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int to_find) {
	typename T::iterator it = std::find(container.begin(), container.end(), to_find);
	if (*it != to_find)
		throw std::invalid_argument("argument not found");
	return it;
}

#endif