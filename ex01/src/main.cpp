#include "../includes/Span.hpp"
#include "../includes/colors.hpp"

int main() {
	Span sp = Span(5);
	try {
		sp.addNumber(9);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(6);
		sp.addNumber(11);

		sp.addNumber(11); // throw exception
		sp.addNumber(9);
		sp.addNumber(17);
	} catch (std::exception &e) {
		std::cout << NRED << e.what() << RESET << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try {
		Span sp = Span(0); // throw exception
		sp.addNumber(9);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(6);
		sp.addNumber(11);
	} catch (std::exception &e) {
		std::cout << NRED << e.what() << RESET << std::endl;
	}
	return 0;
}