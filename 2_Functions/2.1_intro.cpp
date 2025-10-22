/*
===2.1: Intro to Functions===

1. Key Terms 
- func = a reusable sequence of statements designed to execute a particular task
- user-defined funcs = functions u type urself 
- func call/invocation = process telling CPU to interrupt current func to execute a disparate func 
- caller = fun initiating the func 
- callee = func being called 
- invoking = a caller invoking the callee
*/ 

// 2. Ex of User-Defined Func 

/*
returnType functionName() // func header -> tells compiler func exists
{
	// func body -> tells compiler what func does 
} 
*/ 

// 3. Sample Program Demonstr8ing a user-defined func being defined nd called
/*
#include <iostream> 

void func_print()
{
	std::cout << "func_print is the header func called in this ex\n";
} 

int main() 
{

	std::cout << "This is the beginning of the main() func.\n"; 
	func_print(); //critical to include the () after the func's name
	std::cout << "This is the end of the main() func.\n";

	return 0; 
}
*/

/*
4. On Nested Funcs 
- nested func = a func whose def is placed within another func 
	* NOT supported in C++ 
	** include void funcs b4 int main() 
	*** rf below 4 quintessential ex. 
*/

#include <iostream>

void foo() 
{

	std::cout << "Acknowledge that foo is termed a 'metasyntactic var'.\n" 
	<< "Essentially is a specific word or phrase identified as a placeholder, used in comp. programming.\n"; 

}

int main()
{

	std::cout << "Now, we will call the metasyntactic var func - foo.:\n"; 
	
	foo(); 
	
	return 0; 

}
