#include <fstream>
#include <string>

std::string readFile(std::string const &fileName)
{
    std::ifstream file{fileName};
    return {std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>()};
}