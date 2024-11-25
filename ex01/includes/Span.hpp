#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span {
	public:
	// Constructor
	Span(unsigned int N);
	Span(const Span &src);

	// Destructor
	~Span();

	// Operator Overload
	Span &operator=(const Span &src);

	// Methods
	int shortestSpan();
	int longestSpan();
	void addNumber(int nb);
	void addManyNumbers(std::vector<int> &vec);

	private:
	Span();
	std::vector<int> _tab;
	unsigned int _size;
};

#endif