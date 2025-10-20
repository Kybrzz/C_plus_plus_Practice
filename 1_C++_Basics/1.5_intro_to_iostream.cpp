// ===1.5: Intro to iostream: cout, cin, nd endl===

/* Preliminary Info 
- io library = input/output library 
- std::cout = sends date to console to b printed as textat (cout = character output)
- insertion operator = '<<' 
- to output a newline w/o 'flushing the output buffer' (what std::endl does), use \n
inside either single '' or double "" quotes 
	* bp (best practice) to utilize double quotes for \n
- rf program below for sample of \n use
- std::cin >> = character input reads input from keyboard
- extraction operator = '>>' 
*/ 

/* Program Instructions
a) type a program that asks for a user input
b) have it output the user input


#include <iostream> 

int main() { 
	
	// input declaration
	int x{};
	
	// output
	std::cout << "Enter an integer.\n"; 
	
	// input
	std::cin >> x; 
	
	// output again
	std::cout << "You entered: " << x << "\n"; 
	
	
	return 0; 
} 
*/ 

/* ===Common Misconceptions===
- std::cout is used to output a value
- std::cin is used to retrieve an input value 
- insertion nd extraction operators both show the direction the data is moving respectively
	* e.g., std:cout << 4 moves the 4 to the console
	** e.g., std::cin >> x moves the value the user entered via keyboard into var x
*/ 

/* Program 2 Instructions
a) Ask the user to enter three values
b) program prints these three values
c) add an appropriate comment above func main()
d) should match the following output when run w/ input values
	* Enter three numbers: 4 5 6
	** You entered: 4, 5, and 6. 
*/ 

#include <iostream> 

int main() { 

	// integer declaration 
	int x{}; 
	int y{}; 
	int z{}; 
	
	//output 
	std::cout << "Enter three numbers: ";
	
	//input
	std::cin >> x >> y >> z; // important to not seperate w/ comma, instead use extraction operators respectively 
	
	// output 2
	std::cout << "You entered: " << x << ", " 
	<< y << ", " << z << ".\n"; 
	
	return 0; 
	
} 