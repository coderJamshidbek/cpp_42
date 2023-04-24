#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
private:
	
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();

    void highFivesGuys(void);
	void attack(const std::string & target);
};


#endif