#include "Brain.hpp"

// Constructors
Brain::Brain()
{
	std::cout << "\e[0;33mDefault Constructor called of Brain\e[0m" << std::endl;
}

Brain::Brain(const Brain &copy)
{
	*this->ideas = *copy.ideas;
	std::cout << "\e[0;33mCopy Constructor called of Brain\e[0m" << std::endl;
}


// Destructor
Brain::~Brain()
{
	std::cout << "\e[0;31mDestructor called of Brain\e[0m" << std::endl;
}


// Operators
Brain & Brain::operator=(const Brain &assign)
{
	*this->ideas = *assign.ideas;
	return *this;
}

void Brain::setIdeas(unsigned int index, std::string content)
{
	if (index <= this->_nbIdeas)
	{
		this->ideas[index] = content;
	}
}

