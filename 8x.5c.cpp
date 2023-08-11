#include <iostream>
/*
Question 5c) Write a function template named sub that allows the user to subtract two values of different types. The following program should run:
*/
// write your sub function template here
template <typename t, typename t2>
auto sub(t x, t2 y)
{
	return x - y;
}

int main()
{
	std::cout << sub(3, 2) << '\n';
	std::cout << sub(3.5, 2) << '\n';
	std::cout << sub(4, 1.5) << '\n';

	return 0;
}
