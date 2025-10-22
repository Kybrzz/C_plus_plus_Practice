/*
===Intro to Func. Pararements nd Arguments===

1. Preliminary Info 
- func parameter = a var used in the header of a func; they r initialized
w/ a value provided by the caller of the func 
- argument = a value passed from the caller to the func whena  func call is made
	* what is inside the parenthesis of a func 
	** acknowledge that multiple arguments r seperated using commas
- pass-by-value = the process of all the parameters of a func created as vars, nd the value
of each of the arguments is copied into the matching parameter
- value parameters = func parameters that utilize pass-by-value/pass by value
- below is an ex of a func. with a arguments 
*/ 

/*
#include <iostream>

// void print_values(int x{}, int y{}) --> acknowledge that this is incorrect bc u cannot use direct-list initialization in a func parameter list
void print_values(int x, int y)
{
	std::cout << x << "\n"
			  << y << "\n"; 
	
} 

int main()
{ 
	print_values(6, 7);
	
	return 0;

} 
*/ 
	
// again, remember that direct-list initialization is only valid 4 local vars or member vars, never func parameters

/*
2. Further Reading 
- unreferenced parameters = funcs that contain parameters unused in the body of the func
- unnamed parameter = a parameter w/o a name 
- dw ab mastery of these two rn, as they will be covered l8r 
*/ 

/*
3. Program Instructions
- write a func called double_number() that takes one int parameter
- func should return double the value of the parameter 
*/


#include <iostream>

int double_number(int x)
{ 

	int double_x{ (x * 2) }; 
	
	return double_x; 

} 

int main()
{
	int x{}; 
	
	std::cout << "Enter an integer value.\n"; 
	std::cin >> x; 
	
	std::cout << double_number(x) << '\n'; 

	return 0; 
	
} 
