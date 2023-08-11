#include <iostream>

// Question 5a) Write a function template named add that allows the users to add 2 values of the same type.The following program should run :


// write your add function template here

template <typename t>
t add(t x, t y)
{
	return x + y;
}


int main()
{
	std::cout << add(2, 3) << '\n';
	std::cout << add(1.2, 3.4) << '\n';

	return 0;
}
