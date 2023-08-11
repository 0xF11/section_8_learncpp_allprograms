#include <iostream>

/*
Question #2
2a) Upgrade the following program using type aliases:
ORIGINAL CODE
namespace constants
{
	inline constexpr double pi{ 3.14159 };
}

double convertToRadians(double degrees)
{
	return degrees * constants::pi / 180;
}

int main()
{
	std::cout << "Enter a number of degrees: ";
	double degrees{};
	std::cin >> degrees;

	double radians{ convertToRadians(degrees) };
	std::cout << degrees << " degrees is " << radians << " radians.\n";

	return 0;
}


*/

using UScientific = double; // MY SOLUTION

namespace constants
{
	inline constexpr UScientific pi{ 3.14159 }; // MY SOLUTION
}

UScientific convertToRadians(UScientific degrees) // MYSOLUTION
{
	return degrees * constants::pi / 180;
}

int main()
{
	std::cout << "Enter a number of degrees: ";
	UScientific degrees{}; // MY SOLUTION
	std::cin >> degrees;

	UScientific radians{ convertToRadians(degrees) };
	std::cout << degrees << " degrees is " << radians << " radians.\n";

	return 0;
}
/* - WEBSITE SOLUTION - Tbh this is very stupid, Personally i wouldnt even make a type name for this kind of program.
#include <iostream>

namespace constants
{
    inline constexpr double pi{ 3.14159 };
}

using Degrees = double;
using Radians = double;

Radians convertToRadians(Degrees degrees)
{
    return degrees * constants::pi / 180;
}

int main()
{
    std::cout << "Enter a number of degrees: ";
    Degrees degrees{};
    std::cin >> degrees;

    Radians radians{ convertToRadians(degrees) };
    std::cout << degrees << " degrees is " << radians << " radians.\n";

    return 0;
}
*/


/*
2b) Given the definitions for degrees and radians in the previous quiz solution, explain why the following statement will or won’t compile:

radians = degrees;

because arent you just assigning a double to a double -- MY ANSWER


yep im correct - website answer - It will compile. radians has type Radians, which is a type alias for double. degrees has type Degrees, which is also a type alias for double. So this just the assignment of a double value to a variable of type double.
*/
