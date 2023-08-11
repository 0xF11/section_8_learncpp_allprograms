#include <iostream>

/*
Question 3b) Why won’t the following compile?
*/
#include <iostream>

void print() // void print - doesnt do anything
{
    std::cout << "void\n";
}

void print(int x=0) // void print int x - x auto assigned to 0 - function overload
{
    std::cout << "int " << x << '\n';
}

void print(double x) // function overload - x not auto assigned - double variation
{
    std::cout << "double " << x << '\n';
}

int main()
{
    print(5.0f); // will prioritize line 18 for numeric promotion from float to double
    print(); // This doesnt work because the overloaded function doesnt know whether to use line 8 -- (void print()) -- OR line 13 -- (void print(int x=0) --

    return 0;
}


