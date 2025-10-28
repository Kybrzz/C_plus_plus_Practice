/*
==== 4.8: Floating Point Numbers ====

1. Module Focus
a) How to store large +/- numbers? 
b) How to store #s containing a fractional/decimal component? 

2) Key Takeaways
- flaoting point = var type that can contain a num w/ a fractional/decimal component
- 'float' = decimal can support any # of digits b4 nd after the decimal point
- acknowledge that floating point data types r always signed 
- three fund. floating point data types: 
	* single-precision 'float'
	** double-precision 'float'
	*** extended-precision 'float' 
- all literals r double by default
below r some exs. of floating-point vars 
*/ 

#include <iostream>
#include <cstddef> 

void vars_nd_literals()
{
	
	float A { 5.0f }; // f suffix; use always for floats, not 4 other literals
	double B { 12.67 }; 
	long double C { -4222.88888L }; // L suffix; always place after LDs; 4 no other literal
	
} 

/*
3) Post-Code Takeaways
- BPs regarding floating-point vars:
	* default to double
	** use float only for quick programs focused on small size nd quick speed
	*** use long double only when u truly need to 
- std::cout outputs all f-p vars to 6 digits; all else is truncated
- output mainpulator = ? 
- input manipulator = ?? 
- std::setprecision() = an output mainpulator that overrides the default 6 digit precision of
std::cout 
	* needs the <iomanip> library 
below is an ex. of std::setprecision() in action 
*/

#include <iomaip> 
void precision_test()
{ 

	float D { 45879387452.5488924f }; 
	std::cout << std::setprecision(9); 
	std::cout << D << '\n'; 

} 

/*
4) Final Takeaways
- Inf = infinity representation 
- NaN = 'Not a Number' 
exs. of both r below 
*/ 

#include <iostream

void special_values()
{ 

	double posinf { 5.99 / zero }; 
	double neginf { -5.88 / zero }; 
	double nan { zero / zero }; 

} 