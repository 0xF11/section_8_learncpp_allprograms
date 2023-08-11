#include <iostream>

/*
Question 3a) What is the output of this program and why ?
*/


void print(int x) // func int printer
{
	std::cout << "int " << x << '\n';
}

void print(double x) // func double printer -- function overload
{
	std::cout << "double " << x << '\n';
}

int main()
{
	short s{ 5 }; // short normal non decimal point variable
	print(s); // numeric promotion since decimal is not present and compiler favors promoting rather then converting.

	return 0;
}
