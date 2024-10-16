#include "Span.hpp"

int main(){
    Span span = Span(5);
    span.addNumber(11);
    span.addNumber(7);
    span.addNumber(13);
    span.addNumber(19);
    span.addNumber(17);
    std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
    std::cout << "Longest Span: " << span.longestSpan() << std::endl;
}