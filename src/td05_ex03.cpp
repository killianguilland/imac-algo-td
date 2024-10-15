#include <iostream>
#include <vector>

// Exercice 3 (Fibonacci)

std::vector<int> fibonnaci(int const & max) {
    std::vector<int> results {0, 1};

    for (int i = 2; i < max; i++)
    {
        results.push_back(results[i - 1] + results[i - 2]);
    }

    return results;
}

int main()
{
    std::cout << "TD 05 - Ex 03" << std::endl;

    std::vector<int> results {fibonnaci(10)};

    for (int val: results)
    {
        std::cout << val << std::endl;
    }
    return 0;
}