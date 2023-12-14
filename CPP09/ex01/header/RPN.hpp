#ifndef RPN_H
# define RPN_H
# include <iostream>
# include <stack>

class	RPN
{
	public:
		RPN();
		~RPN();
		RPN(std::string formula);
		RPN& operator=(const RPN& source);
		RPN(const RPN& source);
	
	private:
		std::string _formula;
		std::stack<int>	_numstack;
		
};

#endif
