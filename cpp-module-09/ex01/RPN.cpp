#include "RPN.hpp"

RPN::RPN() : _input("")
{
}

RPN::RPN(std::string input) : _input(input)
{
}

RPN::RPN(const RPN &other) : _input(other.getInput())
{
}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
		_input = other.getInput();
	}
	return *this;
}


std::string RPN::getInput() const
{
	return _input;
}


void RPN::run()
{
	std::istringstream iss(_input);
	std::string token;

	while (iss >> token)
	{
		if (std::isdigit(token[0]) && token.size() == 1)
		{
			_stack.push(std::strtod(token.c_str(), NULL));
		}
		else if ((token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/') && token.size() == 1)
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Error: not enough operands");
			double a = _stack.top();
			_stack.pop();
			double b = _stack.top();
			_stack.pop();
			if (token == "+")
				_stack.push(b + a);
			else if (token == "-")
				_stack.push(b - a);
			else if (token == "*")
				_stack.push(b * a);
			else if (token == "/")
			{
				if (a == 0)
					throw std::runtime_error("Error: division by zero");
				_stack.push(b / a);
			}
		}
		else
			throw std::runtime_error("Error: invalid input");
	}
	if (_stack.size() != 1)
		throw std::runtime_error("Error: too many operands");
	std::cout << _stack.top() << std::endl;
}

RPN::~RPN()
{
	
}