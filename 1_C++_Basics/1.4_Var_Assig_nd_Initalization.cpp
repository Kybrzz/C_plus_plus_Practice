/* ===Preliminary Info===
- assignment = process in which a variable is assigned 
- what is the '=' termed? = the assignment operator 
- what is copy assignment = ? 
- what is the equality operator? = '=='
- initializaiton = process of specifying an initial value for an object 
- initializer = syntax used to initialize an object 
- what r the forms of initialization in c++? 
	* copy-initialiation, direct-initialization (both traditional)
	** direct-list initialization, value-initialization (both preferred)
- direct-list-initialization nd value-initialization will be focused on
in the program below 
- when to initialize with 0 v. blank brackets? 
	* 0 = that is initial value 
	** blank = value is ephemeral nd will be replaced l8r
*/ 

#include <iostream> 

int main() { 

	int width {5}; // direct-list-initialization of initial value 5
	int height {}; // value-initialization or zero-initialization
	
	return 0; 
} 

/* ===Info Continued===
- instantiation = a var has been allocated nd initialized
- instance = an instantiated object 
- best practice to use all initialized vars 
- to avoid compiler warnings ab the var being unused, utilize a:
	* [[maybe_unused]] b4 a var 
*/ 

/* ===1.4 Quiz End===
- diff between initialization nd assignment? 
	* initalization = creating a var 
	** assignment = creating a value for a var
-- form of initialiation 2 use if u want to initialize a var w/ a specific val? 
	* direct-list-initialization 
--- defulat-initilization nd value-init: what r they, behavior, nd prefer which?
	* 
	** 
	*** 
*/ 