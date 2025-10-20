/* Instructions: 
a) asks user to enter an int
b) waits 4 user input of int
c) computes that 2 * that int is
d) outputs that number
e Output should be analogous to: 
	* Enter an int: 4
	** 4 doubled is: 8
*/ 
/*
#include <iostream>

int main() 
{ 
	// integer declaration
	int x{}; 
	
	// output and input 
	std::cout << "Enter an integer: \n"; 
	std::cin >> x; 
	
	// final output 
	std::cout << x << " doubled is: " << (x * 2)
	<< "\n"; 
	
	return 0; 
} 
*/ 

/* Program 2 Instructions:
- add in a tripled feature:
	*** 4 tripled is: 12
*/ 

#include <iostream> 

int main() 
{ 

	int num{}; 
	
	std::cout << "Enter a new integer!: \n"; 
	std::cin >> num; 
	
	std::cout << num << " doubled is: " << (num * 2)
	<< ".\n" << num << " tripled is: " << (num * 3) << ".\n"; 
	
	return 0; 

}