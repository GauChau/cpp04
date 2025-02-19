#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>

class Brain
{
	public:
		// Constructors
		Brain();
		Brain(const Brain &copy);

		// Destructor
		virtual ~Brain();

		// Operators
		Brain & operator=(const Brain &assign);

	protected :
		std::string ideas[100];

};

#endif