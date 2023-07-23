// PropertiesReader.h

#pragma once

#include <string>

#ifdef USE_ZERO_COPY
#include "ParseFileZeroCopy.h"
#else
#include "ParseFile.h"
#endif

class PropertiesReader
{
public:
    static PropertiesReader fromFile(std::string const &fileName);

    Properties const &properties() const;

private:
    PropertiesReader(std::string &&content, Properties &&properties);

    const std::string content_;
    const Properties properties_;
};