#include <iostream>
#include <typeinfo>
#include "Template.h"
template <typename Tmpl>
Tmpl max(Tmpl x, Tmpl y)
{
	return (x < y) ? y : x; // max function, now works with all forms, char (ascii code bigger), short, int, float, && double
}

// Template syntax - 
// Creating a template -- template <typename t>
// Using a template -- In place of variable identifiers(maybe?) I.E. Int, Double, etc;
// Using a template to do what you want in main function, -- FName<Identifier>(param1,param2) -- E.X. max<int>(4,2)



int main()
{
	std::cout << typeid(max<double>(5.0, 4)).name() << ' ' << max<double>(5.5, 4) << std::endl; // implicitally asking for double, then the solution of max in double form
	std::cout << typeid(max<float>(2.4f, 4.2f)).name() << ' ' << max<float>(2.4f, 4.2f); // float variation
	std::cout << "\n"; // seperator


	std::cout << typeid(max(9.4, 5.2)).name() << ' ' << max(9.4, 5.2) << std::endl; // Not asking for any variable, let compiler figure it out -- should be double
	std::cout << typeid(max(9.4f, 5.2f)).name() << ' ' << max(9.4f, 5.2f) << std::endl; // Not asking for any variable, let compiler figure it out -- should be float
	std::cout << typeid(max(19, 25)).name() << ' ' << max(19,25) << std::endl; // Not asking for any variable, let compiler figure it out -- should be int

	std::cout << typeid(addnum(5, 3)).name() << addnum(5, 3); // adds 5 and 3 - 8 - int - Not implicityly asked for
	std::cout << typeid(addnum(5.4, 3.6)).name() << addnum(5.4, 3.6); // adds 5.4 and 3.6 - 9 - double - Not implicityly asked for
	std::cout << typeid(addnum<double>(5.4, 3.6)).name() << addnum<double>(5.4, 3.6); // adds 5.4 and 3.6 - 9 - double - implicityly asked for



}
