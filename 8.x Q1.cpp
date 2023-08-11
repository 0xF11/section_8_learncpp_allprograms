#include <iostream>
// C.O = im correct
// W.R = Im wrong, with comment stating what the website says :p


int main()
{
	int a{ 5 }; // 1a - No conversion - C.O
	int b{ 'a' }; // 1b - Promotion, Char is lower byte wise and can take integers - C.O
	int c{ 5.4 }; // 1c - Narrowing conversion, Int cannot handle being initialized as 5.4 (you can however initialize it as int c = 5.4 and compiler will only warn :p) - C.O
	int d{ true }; // 1d - Promotion, from bool to int, (bool can hold integers and is lower byte wise) - C.O
	int e{ static_cast<int>(5.4) }; // 1e - Static casted from double (5.4) to Int - conversion - C.O

	double f{ 5.0f }; // 1f - Promotion since float is lower byte wise and double can hold its value - C.O
	double g{ 5 }; // 1g - conversion from int to double :p - C.O

	// Extra credit section
	long h{ 5 }; // 1h - None needed? - 50%W.R - Solution on website == trivial change but conversion non the less 

	float i{ f }; // 1i (uses previously defined variable f) - Float cant hold as many bytes as a double and since it was previously promoted it is now narrowing - C.O
	float j{ 5.0 }; // 1j - Conversion to double? - Not disallowed since it fits in the range of the float (Weird ngl) - C.O (guessed though tbf, && added comment to help self)

}
