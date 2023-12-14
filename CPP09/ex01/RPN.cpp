#include "header/RPN.hpp"
#include "header/tools.hpp"

RPN::RPN()
{
	exit(error_return("1 argument(formula) is needed\n"));
}

RPN::~RPN()
{
	
}

RPN::RPN(std::string formula)
{
	_formula = check_remove_space(formula);

	// check each character one by one ->  only number or operator is allowd
	for (size_t i = 0; i < _formula.length(); i++)
	{
		 // store the number to the stack(push),
		std::string c;
		c.append(1, _formula[i]);
		if (isdigit(_formula[i]))
			_numstack.push(std::atoi(c.c_str()));

		//if the operator shows up, calculate the 2 top element(pop 2 from stack), and stack the result (push 1 to stack)
		else if (_formula[i] == '+' || _formula[i] == '-' || _formula[i] == '*' || _formula[i] == '/')
		{
			if (_numstack.size() < 2)
				exit (error_return("Error: Number for calculation is missing."));
			int	num2 = _numstack.top(); 
			_numstack.pop();
			int num1 = _numstack.top();
			_numstack.pop();
			switch (_formula[i])
			{
				case '+':
					num1 += num2;
					break;
				case '-':
					num1 -= num2;
					break;
				case '*':
					num1 *= num2;
					break;
				case '/':
					num1 /= num2;
					break;
			}
			_numstack.push(num1);
		}
		else
			exit (error_return("Error: Some charactor is wrong."));
	}
	// at the end of the line, the only one element should be remain in the stack
	if (_numstack.size() != 1)
		exit (error_return("Error: Something is wrong in the RPN formule."));
	std::cout << _numstack.top() << std::endl;
}

RPN& RPN::operator=(const RPN &source)
{
	_formula = source._formula;
	_numstack = source._numstack;
	return (*this);
}

RPN::RPN(const RPN &source)
{	
	*this = source;
}