#include "Span.hpp"

int main()
{
	try {
		Span span = Span(5);
		span.addNumber(11);
		span.addNumber(-7);
		span.addNumber(13);
		span.addNumber(19);
		span.addNumber(17);
		std::cout << "Trying simple test..." << std::endl;
		std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << span.longestSpan() << std::endl;
	} catch (const std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------" << std::endl;
	try {
        // 大规模测试（10,000个数字）
        Span largeSpan(10000);
        for (int i = 0; i < 10000; ++i) {
            largeSpan.addNumber(i * 2); // 添加一些间隔为2的数字
        }
        std::cout << "Trying 10,000 numbers..." << std::endl;
        std::cout << "Shortest Span: " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << largeSpan.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "-------------------" << std::endl;
	try {
        std::vector<int> largeData;
        for (int i = 0; i < 10000; ++i)
            largeData.push_back(i * 2);

        // 使用迭代器添加数据
        Span largeSpan(10000);
        largeSpan.addNumber(largeData.begin(), largeData.end());

        std::cout << "Trying 10,000 numbers with iterator..." << std::endl;
        std::cout << "Shortest Span: " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest Span: " << largeSpan.longestSpan() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }
	std::cout << "-------------------" << std::endl;
    try {
        // 检查没有足够数字时的异常
        Span emptySpan(5);
        emptySpan.addNumber(1);
        std::cout << "Trying shortestSpan on insufficient numbers..." << std::endl;
        std::cout << emptySpan.shortestSpan() << std::endl; // 应该抛出异常
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;

	
}