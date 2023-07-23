// ParseFileZeroCopy.cpp

#include <map>
#include <string>

std::map<std::string_view, std::string_view> parseFile(std::string const &content)
{
    std::map<std::string_view, std::string_view> result;

    std::string_view contentView{content};
    while (contentView.size() > 0)
    {
        std::string_view line{contentView.substr(0, contentView.find('\n'))};

        std::size_t pos = line.find('=');
        if (pos != std::string::npos)
        {
            std::string_view key{line.substr(0, pos)};
            std::string_view value{line.substr(pos + 1)};

            result[key] = value;
        }

        contentView = contentView.substr(std::min(line.size() + 1, contentView.size()));
    }

    return result;
}