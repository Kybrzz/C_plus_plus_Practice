/*
==== 4.9: Boolean Values ====

1. Modular Focus 
a) binary outcomes: y/n, t/f, a/b
b) boolean types 

*/

// 2. Booleans in Action 
#include <iostream>
#include <iomanip> 

void bool_test()
{ 
	
	bool A {}; // to initialize a t/f value to a boolean var, 
	// must use the keywords 'true' nd 'false'
	
	bool B { true }; 
	bool C { false }; 
	
	bool D {}; // analogous to 'bool A', default value is false
	
	bool B { !true }; // logical 'NOT' operator '!' switches a bool value from what is inputted
	// here the true will be initialized w/ the value, 'false' 
	
	//bools r considered to b an integral type 
	
	std::cout << std::boolalpha; // manipulates method std::cout uses to output bool values by 
	// printing bools as 'true' or 'false
	std::noboolalpha; // 'turns back off'
} 

int main() 
{
	bool_test();

	return 0; 
} 