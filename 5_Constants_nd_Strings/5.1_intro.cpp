/*
==== 5.1: Constant Variables/Named Constants ====

1. Modular Focus 
a) two types of constants: named nd literal
b) preprocessor info: O-L Ms nd F-L Ms

2. Key Takeaways 
- constant = a var whos value cannot b altered after initialization
- named constant/symbolic constant = constant values associated w/ an identifier 
- literal constants = constant values not associated w/ an identifer
- how to define a named constant: 
	* constant vars
	** object-like macros w/ substitution text 
	*** enumerated constants 
- 'const' = keyword called a 'const qualifier'
- make vars const whenever possible
below is how to declar a const var
*/ 

#include <iostream>

void vars()
{
	const double gravity { 9.80665 }; 
	const double speed_of_light { 299,792,458 }; // preferred way
	
	int const sides_of_square { 4 }; 			 // acceptable; not preferred
	int const elementary_charge { 1.602176634e-19 }; 
} 

/* 

3. Preprocessor Facts: O-L Ms and F-L Ms 
- macro expansion = process in which identifiers defined by '#define' r replaced w/ their corresponding
replacement text 
- object-like macro = a name replaced w/ text; no parameters 
- func-like macro = a name replaced w/ text; uses arguments
- edge cases = test inputs that expand or expose corner behavior of a system/concept 
- type qualifier/qualifier = a keyword applied to a type that modifies how that type behaves
- const type qualifier/const qualifier = 'const' used to declare a const var
*/ 

#define NAME replacement_text // expanded b4 the compiler sees code
#define PI 3.14159

#undef PI // after this line, PI is no longer expanded (replaced)

#define SIZE 10
int a[SIZE]; // becomes: int a[10]
