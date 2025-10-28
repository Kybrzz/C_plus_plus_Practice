/*
==== 4.4: Signed Integers ====
1. Key Terms 
- int = an integral type representing both + nd - whole numbers
- how many predominant int types r available for use? 
	* four: short int, int, long int, nd long long int 
- sign = the attribute of an int being +, -, or zero 
- below is how to define the four key types of signed ints 
*/ 

#include <iostream>

void signed_ints()
{
	short a; 
	signed short a1; // optional 'signed prefix', not preferred 
	int b;
	long c;
	long long d; 
	
	short e{}; 
	int b { 500 }; 

} 

/* 
2. More Key Info 
- range = set of specific values a data type can hold 
- a var w/ n bits can hold 2^n possible values
- rf second img fort he range of signed intergers 
- overflow = undefined behavior where the result is not mathematically defined
or not in the range of representable values 4 its type 
- int overflow/arithmetic overflow = when an arithmetic op attempts to 
create a value outside the range that can be represented 
- int division always produces an int result bc ints cannot hold fractional values
*/ 

/*
==== 4.5: Unsigned Integers, nd Why to Avoid Them ====
1. Key Terms 
- unsigned ints = set of data types that can hold pos nd neg whole numbers,
including 0 ; + ints only containing non-neg whole numbers 
- rf third img in imgs folder for the range of unsigned ints 
- below is how to def an unsigned int 
- key diff: signed (regular) ints can differentiate between pos nd neg values;
whereas an unsigned int assumes all values r positive 
*/

void unsigned_ints()
{
	unsigned short 1;
	unsigned int 2; 
	unsigned long 3; 
	unsigned long long 4; 
	
	unsigned short 5 { 2000000 };  
	unsigned int 6 { 4389482 }; 
	
} 

/* 
2. When to Use Unsigned Ints? 
a) preferred when dealing w/ bit manipulation 
b) preferred when specificlly defined 'wrap-around' behavior is required
c) acceptable (in some instances, n-n), for performance nd optimzation reasons
*/ 