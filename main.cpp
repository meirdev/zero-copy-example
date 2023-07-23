// main.cpp

#include <iostream>

#include "PropertiesReader.h"

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        std::cout << "Usage: " << argv[0] << " <file>" << std::endl;
        return 1;
    }

    auto reader = PropertiesReader::fromFile(argv[1]);

    for (auto &item : reader.properties())
    {
        std::cout << item.first << ": " << item.second << std::endl;
    }

    return 0;
}