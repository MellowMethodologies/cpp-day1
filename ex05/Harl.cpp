# include "Harl.hpp"

	void Harl:: debug( void )
	{
		std::cout<< DEBUG <<std::endl;
	}

	void Harl:: info( void )
	{
		std::cout<< INFO <<std::endl;
	}

	void Harl:: warning( void )
	{
		std::cout<< WARNING <<std::endl;
	}

	void Harl:: error( void )
	{
		std::cout<< ERROR <<std::endl;
	}

	void Harl:: complain( std::string level )
	{
		int i = 0;
		std::string louder[4] = {
			"WARNING",
			"INFO",
			"DEBUG",
			"ERROR",
		};
		while (i != 4 && louder[i].compare(level) != 0)
			i++;
		switch (--i)
		{
			case 0:
				warning();
				break ;
			case 1:
				info();
				break ;
			case 2:
				debug();
				break ;
			case 3:
				error();
				break ;
			default:
				std::cout << DEF << std::endl;
				break ;
		}
	}
