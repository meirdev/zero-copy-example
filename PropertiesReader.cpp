#include <string>

#include "ReadFile.h"
#include "PropertiesReader.h"

PropertiesReader PropertiesReader::fromFile(std::string const &fileName)
{
    auto content = readFile(fileName);
    auto properties = parseFile(content);

    return {std::move(content), std::move(properties)};
}

Properties const &PropertiesReader::properties() const
{
    return properties_;
}

PropertiesReader::PropertiesReader(std::string &&content, Properties &&properties)
    : content_{std::move(content)}, properties_{std::move(properties)}
{
}
