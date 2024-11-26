#include "../includes/colors.hpp"
#include "../includes/easyfind.hpp"
#include <iostream>
#include <list>
#include <set>
#include <vector>

int main(void) {
  try {
    std::vector<int> vec;
    vec.push_back(0);
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vec.push_back(50);
    vec.push_back(60);
    vec.push_back(70);
    vec.push_back(80);
    vec.push_back(90);
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    std::cout << NGREEN << "		std::vector tests" << RESET
              << std::endl;
    for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
      std::cout << NGREEN << "[" << *it << "] " << RESET;
    }
    std::cout
        << std::endl
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    int to_find = 40;
    std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
    std::cout << GREEN << easyfind(vec, to_find) << "th position" << RESET
              << std::endl;
    to_find = 34;
    std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
    std::cout << GREEN << easyfind(vec, to_find) << " position" << RESET
              << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }
  try {
    std::list<int> vec;
    vec.push_back(0);
    vec.push_back(100);
    vec.push_back(200);
    vec.push_back(300);
    vec.push_back(400);
    vec.push_back(500);
    vec.push_back(600);
    vec.push_back(700);
    vec.push_back(800);
    vec.push_back(900);
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    std::cout << NGREEN << "		     std::list tests" << RESET
              << std::endl;
    for (std::list<int>::iterator it = vec.begin(); it != vec.end(); it++) {
      std::cout << NGREEN << "[" << *it << "] " << RESET;
    }
    std::cout
        << std::endl
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    int to_find = 100;
    std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
    std::cout << GREEN << easyfind(vec, to_find) << "st position" << RESET
              << std::endl;
    to_find = 536;
    std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
    std::cout << GREEN << easyfind(vec, to_find) << " position" << RESET
              << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }
  try {
    std::set<int> vec;
    vec.insert(0);
    vec.insert(1000);
    vec.insert(2000);
    vec.insert(3000);
    vec.insert(4000);
    vec.insert(5000);
    vec.insert(6000);
    vec.insert(7000);
    vec.insert(8000);
    vec.insert(9000);
    std::cout
        << NPURPLE
        << "-------------------------------------------------------------------"
        << RESET << std::endl;
    std::cout << NGREEN << "			std::set tests" << RESET
              << std::endl;
    for (std::set<int>::iterator it = vec.begin(); it != vec.end(); it++) {
      std::cout << NGREEN << "[" << *it << "] " << RESET;
    }
    std::cout
        << std::endl
        << NPURPLE
        << "-------------------------------------------------------------------"
        << RESET << std::endl;
    int to_find = 9000;
    std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
    std::cout << GREEN << easyfind(vec, to_find) << "th position" << RESET
              << std::endl;
    to_find = 12535;
    std::cout << NBLUE << "triyng to find " << to_find << RESET << std::endl;
    std::cout << GREEN << easyfind(vec, to_find) << " position" << RESET
              << std::endl;
  } catch (std::exception &e) {
    std::cout << RED << e.what() << RESET << std::endl;
  }
}