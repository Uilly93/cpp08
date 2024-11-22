#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include "colors.hpp"
#include <deque>
#include <iostream>
#include <stack>

template <typename T, class It = std::deque<T> >
class MutantStack : public std::stack<T, It> {
	public:
	// Constructor
	MutantStack() : std::stack<T, It>() {
	}
	// MutantStack(parametric constructor);
	MutantStack(const MutantStack &src) : std::stack<T, It>(src) {
	}

	// Destructor
	~MutantStack(){};

	// Operator Overload
	MutantStack &operator=(const MutantStack &src) {
		if (this != &src) {
			std::stack<T, It>::operator=(src);
		}
		return *this;
	}

	// Iterators
	typedef typename It::iterator it;
	typedef typename It::const_iterator const_it;
	typedef typename It::reverse_iterator rev_it;
	typedef typename It::const_reverse_iterator const_rev_it;

	// Methods
	it begin() {
		return this->c.begin();
	}
	it end() {
		return this->c.end();
	}
	const_it begin() const {
		return this->c.begin();
	}
	const_it end() const {
		return this->c.end();
	}
	rev_it rbegin() {
		return this->c.rbegin();
	}

	rev_it rend() {
		return this->c.rend();
	}

	const_rev_it rbegin() const {
		return this->c.rbegin();
	}

	const_rev_it rend() const {
		return this->c.rend();
	}
};

#endif