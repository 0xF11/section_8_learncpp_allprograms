#include <iostream>
#include <typeinfo>

int add(int x, int y)
{
	return x + y;
}

double add(double x, double y)
{
	

	std::cout << x + y;

	return x + y;
}

int add(int x, int y, int z)
{
	std::cout << x + y + z;
	return x + y + z;
}


int main()
{
	add(1, 2, 3);
	add(5.0, 243.2);

}
 // can have functions with the same name as long as paramaters are different, provides simpler ways to call functions when i need a paramater different then another (nice)
