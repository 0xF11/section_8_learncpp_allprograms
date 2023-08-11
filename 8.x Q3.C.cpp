// 3c) Why won’t the following compile?

#include <iostream>

void print(long x)
{
    std::cout << "long " << x << '\n'; // 8 byte long
}

void print(double x)
{
    std::cout << "double " << x << '\n'; // 8 byte double
}

int main()
{
    print(5); // the compiler cant choose which to assign it to since their both 8 bytes? i dont know... - correct -- website answer The value 5 is an int. Converting an int to a long or a double is a numeric conversion, and the compiler will be unable to determine which function is a better match.

    return 0;
}
