#include <iostream>
#include <vector>
#include <string>
#include <set>

std::string const alphabet {"abcdefghijklmnopqrstuvwxyz"};

bool is_pangramme(std::string const & str) {
    std::set<char> unique_chars {};
    for (char c: alphabet) {
        for (int i = 0; i < str.size(); i++)
        {
            if (std::tolower(str[i]) == c) {
                unique_chars.insert(c);
                break;
            }
        }
    }
    return unique_chars.size() == 26;
}

int main()
{
    std::cout << "TD 05 - Ex 05" << std::endl;

    
    return 0;
}