/*
==== 5.2: Literals ====

1. Modular Focus
a) literals
b) strings 

2. Key Takeaways
- literals/literal constants = values directly inserted into source code
- types of literals:
	* integers -> int 
	** booleans -> bool 
	*** floating-point -> double 
	**** character -> char 
	***** strings -> const char 
- rf table attached to c a common list of suffixes 
- by default, floating-point literals r the 'double' type,
to switch them to 'float' literals, use the 'f' or 'F' suffix
below is an ex. of this 
*/

#include <iostram>

void literals()
{
	std::cout << 5.0 << '\n';	// 5.0 w/ no suffix = 'double' type
	std::cout << 5.0f << '\n'; 	// 5.0f = 'float' type 
	
	// below is demonstration of both acceptable ways to typing floating-point literals
	
	double pi { 3.14159 };	// using a decimal point 
	double proton_charge { 1.6e-19 }; // using an 'e' to represent the exponent 
	
} 

/*
3. String Takeaways
- string = a collection of sequential chars used to represent text 
- c-style strings/c strings = arrays of chars terminated by the special char '\0', 
indic8ing the end of the string 
- null terminator = the special charater '\0'
- magic number = a literal (often number), either containing an unclear meaning or needing to be later altered
below is an ex. of magic numbers 
- BPs:
	* avoid magic numbers; opt for 'constexpr' vars instead
*/ 

void magic_numbers()
{ 
	const int max_students_in_school { num_classrooms * 30 }; 
	set_max(30);
} 