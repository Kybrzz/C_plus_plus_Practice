/*

==== 5.5: Constant Expressions ====

1. Modular Focus 
a) expressions evaluable @ compile-time 

*/

#include <iostream>

int constants_ex()
{
	const double x { 1.333 }; 
	
	return x; 
} 

int cons_expr()
{
	constexpr int y { 38388 }; 
	
	return y;
}

