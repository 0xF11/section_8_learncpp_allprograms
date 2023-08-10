#include <iostream>
#include <typeinfo>
#include "DefaultArguments.h"

auto mathamaticism(int x, int y = 9)
{
	std::cout << typeid(x + y).name() << ' ' << x + y << " I should be an integer!";
	std::cout << '\n';
	return x + y;

}

auto mathamaticism(double x, int y = 9)
{
	std::cout << typeid(x + y).name() << ' ' << x + y << " I should be a double!";
	std::cout << '\n';
	return x + y;
}

auto stuff(int x = 48, int y = 120, int z = 70, int r =  49)
{
	std::cout << static_cast<char>(x) << static_cast<char>(y) << static_cast<char>(z) << static_cast<char>(r) << static_cast<char>(r) << std::endl; // easter egg

	return (x, y, z, r);
}

// website definition: If a parameter is given a default argument, all subsequent parameters (to the right) must also be given default arguments.
// auto mathamaticism(double x = 4, int y) 
// my definition: Syntacitically invalid, Does not and will not work, all variables ahead of the first initialized variable need to be initialized too


void BestPracticeHeader(int x, int y); 


int main()
{

	mathamaticism(5); // prints 14?
	mathamaticism(5.0); // prints 14, double.

	stuff(); // easter egg
	std::cout << '\n';

	BestPracticeHeader(2);

}
