
#include "Karen.hpp"

Karen::Karen()
{
	X[0] = &Karen::debug;
	X[1] = &Karen::info;
	X[2] = &Karen::warning;
	X[3] = &Karen::error;
	level[0] = "DEBUG";
	level[1] = "INFO";
	level[2] = "WARNING";
	level[3] = "ERROR";
}

void Karen::debug( void )
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::complain( std::string level )
{
	int i = 0;
	while (i < 4)
	{
		if (level == this->level[i])
		{
			std::cout << "[" << this->level[i] << "]" << std::endl;
			break ;
		}
		i++;
	}
	switch(i)
	{
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break ;
		case 0:
			(this->*X[0])();
		case 1:
			(this->*X[1])();
		case 2:
			(this->*X[2])();
		case 3:
			(this->*X[3])();
	}
}
