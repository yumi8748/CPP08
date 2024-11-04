#include "MutantStack.hpp"

int main(){
    // Create a MutantStack and push some values
    std::cout << "Testing with MutantStack:" << std::endl;
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << "Top: " << mstack.top() << std::endl;  // Output the top element
    mstack.pop();  // Pop the top element
    std::cout << "Size after pop: " << mstack.size() << std::endl;  // Size after pop

    // Push additional values
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Iterators to iterate through the stack
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    // Output all elements using the iterator
    std::cout << "Stack contents:" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    // Test the copy constructor from std::stack
    std::stack<int> s(mstack);

	std::cout << "---------------" << std::endl;

    std::cout << "Testing with std::list:" << std::endl;
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    std::cout << "Top element: " << lst.back() << std::endl;
    lst.pop_back();
    std::cout << "List size after pop: " << lst.size() << std::endl;
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    // Iterating through std::list
    std::list<int>::iterator lit = lst.begin();
    std::list<int>::iterator lite = lst.end();
    while (lit != lite) {
        std::cout << *lit << std::endl;
        ++lit;
    }
    return 0;
}