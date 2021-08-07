#include <algorithm>
#include <vector>
#include <math.h>
#include <iostream>

int main()
{
    std::cout << abs(-4);
    if (signbit(4)){
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    return 0;
}