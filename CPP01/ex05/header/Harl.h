#ifndef HARL_H
# define HARL_H

class	Harl
{
	public:
		Harl();
		int		level_to_i(std::string level);
		void	complain(std::string level);

	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		typedef void (Harl::*p_Func)(void);
		p_Func	pFarray[4];
};


#endif