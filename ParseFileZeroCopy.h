// ParseFileZeroCopy.h

#pragma once

#include <map>
#include <string>

typedef std::map<std::string_view, std::string_view> Properties;

Properties parseFile(std::string const &content);
