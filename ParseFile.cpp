// ParseFile.cpp

#include <map>
#include <sstream>
#include <string>

std::map<std::string, std::string> parseFile(std::string const &content)
{
    std::map<std::string, std::string> result;

    std::istringstream input{content};
    for (std::string line; std::getline(input, line);)
    {
        std::size_t pos = line.find('=');
        if (pos != std::string::npos)
        {
            std::string key{line.substr(0, pos)};
            std::string value{line.substr(pos + 1)};

            result.emplace(std::move(key), std::move(value));
        }
    }

    return result;
}
