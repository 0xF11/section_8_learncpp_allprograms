#pragma once
#include <iostream>


void BestPracticeHeader(int x, int y = 4) // PascalCase is awesomesauce
{
	std::cout << typeid(x + y).name() << ' ' << x + y << " I should be an integer value! I am also inside a header\n This means im using best practice!";
}
