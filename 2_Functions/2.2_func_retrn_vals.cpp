/*
===2.2: Function Return Values / Value-Returning Funcs===
1. Key Terms
- return expression = return keyword + following expression
- return value = value produced by return expression copy
- return by value = process of returning a copied value back to the caller 
- below is program that returns from another func
*/

/* 
#include <iostream>

int gets_value_from_user()
{
	std::cout << "Enter an int.\n"; 
	int input{}; 
	std::cin >> input; 
	
	return input; 
}

int main()
{
	int number { gets_value_from_user() }; 
	
	std::cout << number << " doubled is " << (number * 2) << "\n"; 
	
	return 0; 
} 
*/

/*
2. Further Info 
- how does main() func work? 
	* When the program is executed, the operating system makes a function call to main().
	** Execution then jumps to the top of main().
	*** The statements in main() are executed sequentially.
	**** Finally, main() returns an integer value (usually 0), and your program terminates.
- main() BPs:
	* define main() func @ bottom of code
	** define it beneath other funcs 
	*** avoid calling it explicitly 
- status code = return value from main() 
	* by convention, a status code of 0 means program runs normally
- value-returning func = astonishingly, means a func that returns a val
*/

/*
3. Program Instructions
- type a program that doesn't repeat itself nd uses another func besides main,
to ask for two integers nd provide the sum, diff, prod, nd quotient
- validate non-zero denom for quotient. 
- use optimal # of funcs, w/ main() being the cleanest/least amount of code
- insert input validation, preventing the user from entering a non-integer (floating-point #) 
*/

#include <iostream>
#include <limits>  // Q1: Declares: 
// numeric_limits (template), float_round_style (enum), nd float_denorm_style (second enum) 

int calling_int() // use int when returning data is essential to a func
{
	
	int input{}; 
	while (true)
	{ 
		std::cout << "Enter an integer.\n"; 
		std::cin >> input; 
	
		if (std::cin.fail()) // checks if previous extraction op failed
			{
				std::cin.clear(); // error handled; re-input 
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //std::streamsize = integral type representing the # of chars transferred in an i/o op,
				// or the size of an i/o buffer
				std::cout << "Invalid input. Integer input not detected. Please re-enter an integer.\n"; 
			} 
		else
			{
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
			return input; 
			}
	} 
} 

void do_math( int a, int b ) // use void when a func only needs to execute actions
{
	if (b == 0)
	{ 
		std::cout << "Division by 0 impossible. Kindly re-enter a second integer.\n"; 
		b = calling_int(); 
	} 
	
	int sum {a + b}; 
	int diff {a - b}; 
	int product {a * b}; 
	double quotient{ static_cast<double>(a / b) }; 
	
	std::cout 
	<< "Sum: " << sum << "\n"
	<< "Difference: " << diff << "\n"
	<< "Product: " << product << "\n"
	<< "Quotient: " << quotient << "\n";
	
} 

int main() 
{
	int a{ calling_int() }; 
	int b{ calling_int() }; 
	
	do_math(a, b); 
	
	return 0; 
	
} 
	
	
	
