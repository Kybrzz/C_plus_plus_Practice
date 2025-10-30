/*
==== 5.3: Numeral Systems ====

1. Modular Focus
a) rudimental overview of hexadecimal numbers 
b) numeral systems intro 

2. Key Takeaways 
- decimal/base 10 = standarized counting system 
- binary = two digit counting system: 0 nd 1; termed 'base 2'
- numeral system = a collection of symbols representing numbers
- octal = base 8 numeral system (only digits available r 0-7)
- hexadecimal = base 16 numeral system 
below is how to use a hexadecimal
*/ 

#include <iostream>

void ex1()
{ 
	int x { 0xnum };	// '0x' b4 the number represents a hexadecimal
	
	std::cout << x << '\n'; 
	
	std::cout << std::hex << x << '\n';	// these 3 r i/o manipulators that switch the output format
	std::cout << std::oct << x << '\n'; 
	std::cout << std::dec << x << '\n'
} 

#include <bitset> // for std::bitset
void ex2()
{
	std::bitset<8> bin1 { 0b11 }; // alows u 2 output values in binary
	std::bitset<8> bin2 { 0xC5 }; 
}

#include <format> // introduced in c++20
#include <iostream>
#include <print>	// introduced in c++23

// the above r better options 4 printing in binary

int main()
{
	std::cout << std::format("{:b}\n", 0b1010); // formats argument as 'binary digits'
	std::cout << std::format("{:#b}\n", 0b1010); //formats as 0b-prefixed binary digits
	
	std::println("{:b} {:#b}", 0b1010, 0b1010); //format/print two arguments, plus a newline 
} 