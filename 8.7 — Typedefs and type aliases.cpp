#include <iostream>
#include <typeinfo>

/*
Question #1

Given the following function prototype :

int printData();
Convert the int return value to a type alias named PrintError.Include both the type alias statement and the updated function prototype.
*/


using PrintError = int;
PrintError printdata();


// OR not using best practices -
/*
typedef int PrintError;
PrintError printdata();

*/


int main()
{

	using distance = double ;

	distance once{ 4.2 };
	double ones{ 4.3 };

	std::cout << once;
	std::cout << ones;

}

