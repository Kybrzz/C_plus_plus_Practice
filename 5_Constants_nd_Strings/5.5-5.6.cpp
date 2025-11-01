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
	constexpr int x2 { exr }; // porque var x2 es un 'constexpr', 'exr' must be evaulatable
	constexpr int y { 38388 }; 
	
	return y;
}

/*
2. Key Takeaways
- compile-time programming = use of lang. features resulting in compile-time evaluation 
- constant expr = non-empty sequence of literals, const vars, operators, nd function calls, 
all of which must be evalu8able @ compile-time 
- what can be in a const expr? 
	* literals
	** operators w/ const expr operands
	*** const int vars w/ a const expr initializer 
	**** constexpr vars 
	***** constexpr func calls 
	****** non-type template parameters 
	******* enumerators
	******** type traits 
	********* constexpr lambda expressions 
- acknowledge:
	* a constexpr is literally defined by what it ISN'T
- manifestly constant-evaluated expression - an expression that must be evaulated @ compile-time
*/

/*
==== 5.6: Constexpr Variables ====

1. Modular Focus 
a) how to create vars used in const expressions in c++ 
b) how to ensure code executes @ compile-time 

2. Key Takeaways
- constexpr var = a compile-time constant 
- const v. const expr:
	* const = value of obj is immutable after initialization
	** const expr = obj can be used in a const expr 
- const expr func = a func callable in a const expr
below is an ex. of a const expr func 
*/ 

#include <iostream>

constexpr int test1(int x, double y)
{
	if (x >> y)
		return 1;
	elif (x << y)
		return 2; 
	else
		return 3;
} 


