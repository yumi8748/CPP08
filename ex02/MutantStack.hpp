#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <string>
# include <list>

template<typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack() {}
        MutantStack(const MutantStack& other) : std::stack<T>(other) {}
        ~MutantStack() {}

        MutantStack& operator=(const MutantStack& other) {
            if (this != &other) {
                std::stack<T>::operator=(other);
            }
            return *this;
        }

        // 定義迭代器類型，基於底層容器類型（std::stack<T>::container_type）
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
        typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

        iterator begin(){return std::stack<T>::c.begin();}
        iterator end(){return std::stack<T>::c.end();}

        const_iterator cbegin() const {return std::stack<T>::c.cbegin();}
        const_iterator cend() const {return std::stack<T>::c.cend();}

        reverse_iterator rbegin() {return std::stack<T>::c.rbegin();}
        reverse_iterator rend() {return std::stack<T>::c.rend();}

        const_reverse_iterator crbegin() const {return std::stack<T>::c.crbegin();}
        const_reverse_iterator crend() const {return std::stack<T>::c.crend();}
};

#endif