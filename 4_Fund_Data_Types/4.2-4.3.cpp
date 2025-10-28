/*
==== 4.2: Void ====
1. Key Info 
- void = 'no type' 
- incomplete type = type declared but not yet defined 
	* Cannot b instantiated 
- what is the typical use of a 'void' func? 
	* to indic8 a func that doesn't return a value 
- void uses..
	* an empty parameter list 
- below is an ex of optimal void fun; 
*/ 

#include <iostream> 
#include <iomanip> 
#include <limits>

void get_value()
{ 
	int x{}; 
	std::cout << "Heya!" << x << "\n"; 
	
	return; 
	
} 

/*
==== 4.3: The 'Sizeof' Operator ====
- how to determine size of data types in c++?
	* use an operator termed 'sizeof' 
- sizeof' operator = a unary operator taking either a type or var, 
nd returning the size of an obj of that type in bytes 

*/ 

int main()
{ 
	std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes.\n"; 
	
	return 0; 
} 

// acknowledge that the above is a templatable func that can b used to determine 
// the outputs nd byte size of any of the fund data types from 4.2s img