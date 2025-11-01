/*

==== 5.7: Intro to std::string ====

1. Modular Focus 
a) avoiding c-style string vars
b) what other type of var should we use?
c) class types: std::string nd std::string_view 

*/

#include <iostream>
#include <string> 

void string_output(const std::string& name) 
{ 
	std::cout << "Testing name...Standby....Name is: "
	<< name << '\n'; 
}

void get_line_intro()
{ 
	std::getline(std::cin >> std::ws, name); 
	// getline = reads a full line of text into a name 
	// std::ws = input manipulator telling std::cin 2 ignore any leading whitespace b4 extraction 
} 

int main()
{
	std::string name { "name_ex" }; 
	string_output(name); 
	
	return 0;
} 

/*

==== 5.8 Intro to std::string_view ====

1. Modular Focus 
a) std::string is too expensive to initialize or copy
b) what to use instead? 

2. Key Takeaways 
- std::string_view = provides read-only access to an existing c-style string 
- read-only = accessable y usable; pero no es modificable 
- opt 4 std::string_view over std::string when u need a read-only string 

*/ 

#include <iostream> 
#include <string_view> 

void print_test(std::string_view str)
{ 
	std::cout << str << '\n'; 
} 

int main()
{ 
	std::string_view s{ "Hello world!" }; 
	print_test; 
	
	return 0;
} 