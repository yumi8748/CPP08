#include "Span.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

Span::Span(): MaxNbrOfInt(0){}

Span::Span(unsigned int MaxNbrOfInt): MaxNbrOfInt(MaxNbrOfInt){}


Span::Span( const Span & src ): MaxNbrOfInt(src.MaxNbrOfInt), nbr_list(src.nbr_list){}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

Span::~Span()
{
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

Span &				Span::operator=( Span const & src )
{
	if ( this != &src )
	{
		this->MaxNbrOfInt = src.MaxNbrOfInt;
		this->nbr_list = src.nbr_list;
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/
void	Span::addNumber(int nbr)
{
	if (nbr_list.size() >= MaxNbrOfInt)
		throw (FullException());
	nbr_list.push_back(nbr);
}

int	Span::shortestSpan()
{
	if (nbr_list.size() < 2)
		throw (TooFewException());
	std::vector<int> sorted_list = nbr_list;
	std::sort(sorted_list.begin(), sorted_list.end());
	
	int MinSpan = std::numeric_limits<int>::max();
	for(int i = 1;i < sorted_list.size(); ++i)
	{
		int tmp_span = sorted_list[i] - sorted_list[i - 1];
		if (tmp_span < MinSpan)
			MinSpan = tmp_span;
	}
	return (MinSpan);
}

int	Span::longestSpan()
{
	if (nbr_list.size() < 2)
		throw (TooFewException());
	std::vector<int> sorted_list = nbr_list;
	std::sort(sorted_list.begin(), sorted_list.end());
        
	return sorted_list.back() - sorted_list.front();
}
/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */