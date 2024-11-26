#include "../includes/Span.hpp"
#include "../includes/colors.hpp"
#include <iostream>

int main() {
  try {
    Span sp = Span(5);
    sp.addNumber(9);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(6);
    sp.addNumber(11);

    // sp.addNumber(11); // throws exception
    // sp.addNumber(9);
    // sp.addNumber(17);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << NRED << e.what() << RESET << std::endl;
  }
  try {
    Span sp = Span(5);
    std::vector<int> array;
    array.push_back(9);
    array.push_back(3);
    array.push_back(17);
    array.push_back(6);
    array.push_back(11);
    // array.push_back(99); // throws exception
    sp.addManyNumbers(array);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << NRED << e.what() << RESET << std::endl;
  }
  try {
    Span sp = Span(0); // throws exception
    sp.addNumber(9);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(6);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
  } catch (std::exception &e) {
    std::cout << NRED << e.what() << RESET << std::endl;
  }
  return 0;
}