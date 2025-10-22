/*
===2.3: Void Funcs / Non-Value Returning Funcs===
1. Preliminary Info 
- focus is on funcs w/ return type of 'void'
- funcs r not required 2 return a value back to caller
	* what is called? 
- non-value returning fun/void func = a func that doesn't return a value
- BP regarding void funcs:
	* don't type a return statement @ the end of a void func
- below is an ex of a compile error when outputting a void func

*/

#include <iostream>
#include <limits>

void purposeful_error()
{
	std::cout << "This is optimal.\n"; 
}

int main()
{
	purposeful_error(); // this is acceptable
	
	std::cout << purposeful_error(); // this will result in compile error
	// u cannot call a func that returns a 'void' value
	
	return 0; 
} 