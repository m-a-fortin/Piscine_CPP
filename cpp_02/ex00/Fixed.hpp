
#pragma once

class	Fixed
{
	public:
		Fixed();
		~Fixed();
		Fixed(Fixed& cpy);
		Fixed&	operator=(Fixed&	fixed);
		int	getRawBits() const;
		void	setRawBits( int const raw);
	private:
		int					value;
		static const int	bits = 8;
};
