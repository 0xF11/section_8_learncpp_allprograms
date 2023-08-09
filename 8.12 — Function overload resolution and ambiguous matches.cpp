#include <iostream>
#include <typeinfo>
int F1(int x, char y)
{
	std::cout << typeid(x + y).name() << ' ' << x + y << '\n';
	return x + y;
}
double F1(double x, char y)
{
	std::cout << typeid(x + y).name() << ' ' << x + y;
	return x + y;
}



int main()
{
	F1(19, 'a'); // should produce 116
	F1(19.0, 'a'); // Should produce 116, in double form


}

// all i really got from this was how the compiler promotes or converts invalid variables for use in functions if they can be used (if you understand what i mean by that)
