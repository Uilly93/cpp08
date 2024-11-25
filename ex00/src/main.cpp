#include "../includes/easyfind.hpp"
#include "../includes/colors.hpp"
#include <iostream>
#include <list>
#include <set>
#include <vector>

int main(void) {
	try {
		std::vector<int> vec = {0, 10, 20, 30, 40, 50, 60, 70, 80, 90};
		std::cout << NPURPLE << "--------------------------------------------------------------"
				  << RESET << std::endl;
		std::cout << NGREEN << "		std::vector tests" << RESET << std::endl;
		for (typename std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
			std::cout << NGREEN << "[" << *it << "] " << RESET;
		}
		std::cout << std::endl
				  << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
		int to_find = 40;
		std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
		std::cout << GREEN << easyfind(vec, to_find) << "th position" << RESET << std::endl;
		to_find = 34;
		std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
		std::cout << GREEN << easyfind(vec, to_find) << " position" << RESET << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	try {
		std::list<int> vec = {0, 100, 200, 300, 400, 500, 600, 700, 800, 900};
		std::cout << NPURPLE << "--------------------------------------------------------------"
				  << RESET << std::endl;
		std::cout << NGREEN << "		     std::list tests" << RESET << std::endl;
		for (typename std::list<int>::iterator it = vec.begin(); it != vec.end(); it++) {
			std::cout << NGREEN << "[" << *it << "] " << RESET;
		}
		std::cout << std::endl
				  << NPURPLE << "--------------------------------------------------------------" << RESET << std::endl;
		int to_find = 100;
		std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
		std::cout << GREEN << easyfind(vec, to_find) << "st position" << RESET << std::endl;
		to_find = 536;
		std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
		std::cout << GREEN << easyfind(vec, to_find) << " position" << RESET << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
	try {
		std::set<int> vec = {0, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000};
		std::cout << NPURPLE << "-------------------------------------------------------------------"
				  << RESET << std::endl;
		std::cout << NGREEN << "			std::set tests" << RESET << std::endl;
		for (typename std::set<int>::iterator it = vec.begin(); it != vec.end(); it++) {
			std::cout << NGREEN << "[" << *it << "] " << RESET;
		}
		std::cout << std::endl
				  << NPURPLE
				  << "-------------------------------------------------------------------" << RESET
				  << std::endl;
		int to_find = 9000;
		std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
		std::cout << GREEN << easyfind(vec, to_find) << "th position" << RESET << std::endl;
		to_find = 12535;
		std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
		std::cout << GREEN << easyfind(vec, to_find) << " position" << RESET << std::endl;
	} catch (std::exception &e) {
		std::cout << RED << e.what() << RESET << std::endl;
	}
}