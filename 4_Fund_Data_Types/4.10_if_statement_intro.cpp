/*

==== 4.10: Intro to 'if' Statements ====

1. Modular Focus 
a) conditional statements
b) correlating and inputting conditional statements into programming
c) 'if' statements 

2. Key Takeaways 
- 'if' statement = permits code execution if one (or more) lines of code is true
- condtion/conditional expression = an expression that evalautes to a boolean value 
below is an ex. of an if statement in action 
- early return = a return statement not the last statement in a func 

*/ 

#include <iostream>
#include <iomanip> 

int if_testing()
{ 

	double x {}; 
	
	std::cout << "Enter an integer.\n"; 
	std:;cin >> x; 
	
	if ( x == 0 )
		std:cout << "The inputted value is zero\n"; 
	else
		std::cout << "The inputted value is non-zero.\n"; 
	
	return x; 
	
} 

int else_if_testing()
{ 
	
	double y {}; 
	
	std::cout << "Enter an integer.\n"; 
	std::cin >> y; 
	
	if ( x > 0 )
		std::cout << "The value is positive.\n"; 
	else if ( x < 0 )
		std::cout << "The value is negative.\n"; 
	else
		std::cout << "The value is zero!\n"; 
	
	return y; 
} 

int main()
{
	if_testing(); 
	else_if_testing(); 
	
	return 0; 

} 

