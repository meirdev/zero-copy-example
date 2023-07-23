// ParseFile.h

#pragma once

#include <map>
#include <string>

typedef std::map<std::string, std::string> Properties;

Properties parseFile(std::string const &content);
