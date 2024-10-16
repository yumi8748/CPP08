#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <limits>

class Span
{

	public:

		Span();
		Span(unsigned int MaxNbrOfInt);
		Span( Span const & src );
		~Span();
		Span &		operator=( Span const & rhs );

		void	addNumber(int nbr);
		int	shortestSpan();
		int	longestSpan();

		class FullException: public std::exception{
			const char *what() const throw(){
				return ("Span is full, cannot add more!");
			}
		};
		class TooFewException: public std::exception{
			const char *what() const throw(){
				return ("Span not found! There is none or only one nbr!");
			}
		};

	private:
		unsigned int		MaxNbrOfInt;
		std::vector<int>	nbr_list;
};

#endif /* ************************************************************ SPAN_H */