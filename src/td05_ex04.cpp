#include <iostream>
#include <vector>

int somme(std::vector<int> const & vec) {
    int sum {0};

    for(int val: vec) {
        sum += val;
    }

    return sum;
    
}

int somme(std::vector<float> const & vec) {
    int sum {0};

    for(int val: vec) {
        sum += val;
    }

    return sum;
    
}

int moyenne(std::vector<int> const & vec) {
    int sum {somme(vec)};

    return sum / vec.size();
}

int moyenne(std::vector<float> const & vec) {
    int sum {somme(vec)};

    return sum / vec.size();
}

int main()
{
    std::cout << "TD 05 - Ex 03" << std::endl;

    std::vector<int> const vec {5, 10, 5, 10};

    std::vector<int> results {somme(vec)};

    for (int val: results)
    {
        std::cout << val << std::endl;
    }
    return 0;
}