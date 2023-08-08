#include <iostream>

void floatconverter(double x)
{
	std::cout << x << " I am converted from a float to a double! Or i was already a double... Who knows? sizeof Does!" << std::endl;
}

void integeralpromotion(int y) {
	std::cout << y << "I was initially either a char, short, bool, unsigned char, or an unsigned short.. But now im integerally promoted to an int!" << '\n';
}


int main()
{
	// integeral and floating point promotion

	float j = 4.2f;
	double r = 5.9;
	char a = 'a';
	short s = 1;
	bool b = true;


	floatconverter(j);
	floatconverter(r);

	integeralpromotion(a);
	integeralpromotion(s);
	integeralpromotion(b);


}
