#include "Span.hpp"
#include <list>
#include <ctime>
#include <cstdlib>
#include <algorithm>

int main( void )
{
    std::cout << "---- TEST #1 -----" << std::endl;

    Span sp = Span( 5 );

    sp.addNumber( 6 );
    sp.addNumber( 3 );
    sp.addNumber( 9 );
   // sp.addNumber( 17 );
   // sp.addNumber( 11 );

    std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
    std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;

    std::cout << "\n---- TEST #1 -----" << std::endl;
	for (unsigned int i = 0; i < sp.getSize(); i++)
		std::cout << sp.getVect()[i] << std::endl;
    try {
     	Span span( 1000 );
        std::srand( time ( NULL ) );
        for (unsigned int i = 0; i < 1000; i++)
        	span.addNumber(std::rand());
        std::cout << "Longest span: " << span.longestSpan() << std::endl;
        std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
        
    } catch ( std::exception& e ) {
        std::cout << e.what() << std::endl; 
    }

    return 0;
}
