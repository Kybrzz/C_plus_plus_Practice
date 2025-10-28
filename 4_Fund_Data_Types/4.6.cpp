/*
==== 4.6: Fixed-Width Ints ====
1. Key Terms 
- fixed-width ints = an alt. set of int. types guaranteed to be the same
size on any architecture, defined in the <cstdint> header
- these 'fixed-width ints' have a range nd fixed size; rf the fourth img
(range_of_fixed_width_ints.png) 
- below is an ex. of this 
- BP regarding this: 
	* utilize a 'f-w i' when u need an integral types containing a guaranted range
*/ 

#include <iostream>
#include <cstdint> // also permits access to 'fast' nd 'least' int types, in addition to f-w i's

void fixed_width()
{ 

	std::int32_t x { 4289289 }; 
	std::int32_t y { x / 2 }; 
	
	std::cout << y << '\n'; 

} 

/* 
2. Fast nd Least Int Types 
- fast int = a type of int that provides the fasted signed/unsigned int type w/ a width of @ least
# bits, where # = 8, 16, 32, or 64) 
	* fastest = inteer type processed the most quickly by CPU 
- least int = a type of int that provides the smallest signed/unsigned int type w/ a width of @ 
least # bits, where # = 8, 16, 32, or 64 
- BP regarding F nd L int types:
	* avoid them bc they may exhibit diff behaviors on arhcietures whee they resolve to diff sizes 
*/ 

void fast_nd_least()
{ 
	std::cout << "Least 8: " << sizeof(std::int_least8_t) * 8 << " bits\n"; 

/*
3. More Takeaways
- final BPs regarding all int types (fund, f-w, signed/unsigned, nd fast/least),
here is a semi-ubiquitous list 4 BPs regarding ints: 
	* paramount principle: opt for correctness over speed; opt for failiure @ compile time than @
	runtime
	** int = size of int is negligible 
	*** std::int#_t = storing a quantity needing a guranteed range 
	**** std::uint#_t = using bit manipulation or needing well-defined wrap-around behavior 
	***** short, long, fast/least = prefer a f-w i 
	****** 8-bit f-w int (std::int8_t) = use a 16-bit f-w i instead (std::int16_t)
- std::size_t = a typedef, more explicitly defined in lesson 10
*/ 

#include <cstddef>	// permits std::size_t
#include <cstdint> // permits f-w, f/l 
#include <iostream> 

void size()
{ 
	std::int16_t A { 500 }; 
	std::size_t B { sizeof(x) }; 
	std::cout << B << '\n'; 
	
} 

int main()
{
	fixed_width();
	fast_nd_least(); 
	size(); 

	return 0;
	
} 