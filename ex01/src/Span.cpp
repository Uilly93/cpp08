#include "../includes/Span.hpp"
#include "../includes/colors.hpp"
#include <algorithm>
#include <stdexcept>
#include <vector>

// Constructors
Span::Span() : _tab() {
	_size = 0;
	std::cout << GREEN << "Span Default Constructor called" << RESET << std::endl;
}

Span::Span(unsigned int N) :/*  _tab(),  */_size(N) {
	if (N == 0)
		throw std::invalid_argument("invalid argument");
	_tab.reserve(N);
	std::cout << GREEN << "Span Default Constructor called" << RESET << std::endl;
}

Span::Span(const Span &src) {
	std::cout << BLUE << "Span Copy Constructor called" << RESET << std::endl;
	*this = src;
}
// Destructor
Span::~Span() {
	std::cout << RED << "Span Destructor called " << RESET << std::endl;
}

// Operator Overload
Span &Span::operator=(const Span &src) {
	std::cout << PURPLE << "Span Copy Assignment Operator called" << RESET << std::endl;
	if (this != &src) {
		this->_size = src._size;
		this->_tab = src._tab;
	}
	return *this;
}
// Methods
int Span::shortestSpan() {
	std::sort(_tab.begin(), _tab.end());
	int shortest = *(_tab.end() - 1);
	for (std::vector<int>::iterator it = _tab.begin(); it != _tab.end() - 1; it++) {
		if (*(it + 1) - *it < shortest)
			shortest = *(it + 1) - *it;
	}
	std::cout << NGREEN << "the shortest span is " << shortest << RESET << std::endl;
	return shortest;
}

int Span::longestSpan() {
	std::sort(_tab.begin(), _tab.end());
	int min = *_tab.begin();
	int max = *(_tab.end() - 1);
	std::cout << NGREEN << "the longest span is " << max - min << RESET << std::endl;
	return max - min;
}

void Span::addNumber(int nb) {
	if (_size > 0) {
		_tab.push_back(nb);
		std::cout << NGREEN << nb <<" added to list" << RESET << std::endl;
		_size--;
	} else {
		throw std::invalid_argument("array is full");
	}
}
