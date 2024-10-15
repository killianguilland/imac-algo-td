#include <iostream>

int factorielle(int val)
{
    if((val - 1) > 0) {
        return factorielle(val - 1) * val;
    } else {
        return val;
    }
}

int recursive_factorielle(int maxv) {
    int v {1};

    for (int i = 1; i <= maxv; i++)
    {
        v *= i;
    }
    return v;
    
}

int main()
{
    std::cout << "TD 05 - Ex 02" << std::endl;

    std::cout << factorielle(10) << std::endl;
    std::cout << recursive_factorielle(10) << std::endl;
    return 0;
}