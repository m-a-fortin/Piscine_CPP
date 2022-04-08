
#pragma once
#include <iostream>

class	Karen
{
	public:
		void complain( std::string level );
		Karen( void );
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
		std::string level[4];
		void	(Karen::*X[4])(void);
};
