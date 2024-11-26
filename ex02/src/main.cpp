#include "../includes/MutantStack.hpp"
#include "../includes/colors.hpp"
#include <iostream>
#include <vector>

int main() {
  {
    MutantStack<int> mstack;
    mstack.push(0);
    mstack.push(1);
    mstack.push(2);
    mstack.push(3);
    mstack.push(4);
    mstack.push(5);
    mstack.push(6);
    mstack.push(7);
    mstack.push(12);
    mstack.pop(); // remove the last added element (12)
    std::cout << NGREEN << "testing iterators" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    for (MutantStack<int>::it it = mstack.begin(); it != mstack.end(); it++)
      std::cout << NGREEN << "[" << *it << "]" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    std::cout << std::endl;

    std::cout << NGREEN << "testing const iterators" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    for (MutantStack<int>::const_it c_it = mstack.begin(); c_it != mstack.end();
         c_it++)
      std::cout << NGREEN << "[" << *c_it << "]" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    std::cout << std::endl;

    std::cout << NGREEN << "testing revers iterators" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    for (MutantStack<int>::rev_it rev_it = mstack.rbegin();
         rev_it != mstack.rend(); rev_it++)
      std::cout << NGREEN << "[" << *rev_it << "]" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    std::cout << std::endl;

    std::cout << NGREEN << "testing const revers iterators" << RESET
              << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    for (MutantStack<int>::const_rev_it const_rev_it = mstack.rbegin();
         const_rev_it != mstack.rend(); const_rev_it++)
      std::cout << NGREEN << "[" << *const_rev_it << "]" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
  }
  std::cout << NPURPLE
            << "--------------------------------------------------------------"
            << RESET << std::endl;
  std::cout << NGREEN << "testing same inputs with std::vector" << RESET
            << std::endl;
  std::cout << NPURPLE
            << "--------------------------------------------------------------"
            << RESET << std::endl;
  {
    std::vector<int> mstack;
    mstack.push_back(0);
    mstack.push_back(1);
    mstack.push_back(2);
    mstack.push_back(3);
    mstack.push_back(4);
    mstack.push_back(5);
    mstack.push_back(6);
    mstack.push_back(7);
    mstack.push_back(12);
    mstack.pop_back(); // remove the last added element (12)
    std::cout << NGREEN << "testing iterators" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    for (std::vector<int>::iterator it = mstack.begin(); it != mstack.end();
         it++)
      std::cout << NGREEN << "[" << *it << "]" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    std::cout << std::endl;

    std::cout << NGREEN << "testing const iterators" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    for (std::vector<int>::const_iterator c_it = mstack.begin();
         c_it != mstack.end(); c_it++)
      std::cout << NGREEN << "[" << *c_it << "]" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    std::cout << std::endl;

    std::cout << NGREEN << "testing revers iterators" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    for (std::vector<int>::reverse_iterator rev_it = mstack.rbegin();
         rev_it != mstack.rend(); rev_it++)
      std::cout << NGREEN << "[" << *rev_it << "]" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    std::cout << std::endl;

    std::cout << NGREEN << "testing const revers iterators" << RESET
              << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
    for (std::vector<int>::const_reverse_iterator const_rev_it =
             mstack.rbegin();
         const_rev_it != mstack.rend(); const_rev_it++)
      std::cout << NGREEN << "[" << *const_rev_it << "]" << RESET << std::endl;
    std::cout
        << NPURPLE
        << "--------------------------------------------------------------"
        << RESET << std::endl;
  }
  return 0;
}