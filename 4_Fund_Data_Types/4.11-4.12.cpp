/*

==== 4.11: Chars ====

1. Modular Focus 
a) What if u want to store characters that rnt numbers or true/false values?
b) What fund. data types can store other characters? 

2. Key Takeaways
- char = fund. data type designed to contain a single character
- character = any single symbol, letter, number, or whitespace 
- ASCII = American Standard Code for Information Interchange
	* defines a specific method to represent ENG characters + other key symbols,
	as numbers between 0 nd 127
- ASCII code/code point = specific ASCII code representing a certain ENG character
below is code demonstrating intializatio of chars

*/ 

#include <iostream>
#include <iomanip> 

int character_test()
{
	char ch1 { 'a' }; // initialize w/ code point for 'a'; preferred 
	char ch2 { 97 }; // possibleto initialize chars w/ ints, but avoid this
	
	std::cin.get(ch1); // a func that doesn't ignore leading whitespace
	std::cout << "Test run baba!\n"; 
	
	return ch1; 
} 

int main()
{
	character_test(); 
	
	return 0; 
} 

/*
3. Post-Code Takeaways
- escape sequences = special meaning chars in the C++ lang. 
- exahsutive list of escape sequences rf img attached in chapter folder 'Imgs'
	* Escape_sequences
*/ 


/*
==== 4.12: Intro to Type Conversion nd Static_Cast ====

1. Modular Focus 
a) the process of converting one data type to another 

2. Key Takeaways
- type conversion = the process of converting one data type to another 
- implict type conversion = ? (discussed l8r in lesson 10.1) 
- explicit type conversion = permits the programmer to explicity tell the compiler to convert a value fron one 
data type to another 
below is an ex. of explicit type conversion in action. 
*/ 

#include <iostream> 
#include <iomanip> 

void print_func(int x)
{
	std::cout << x << '\n'; 
}

int main()
{
	print( static_cast<int>(5.5) ); 
	unsigned int x2 { static_cast<unsigned int>(x2) }; 
	
	return 0; 
}